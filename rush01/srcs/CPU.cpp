#include "../includes/CPU.hpp"
#include "../includes/utilities.hpp"

CPU::CPU() {
	this->update();
}
CPU::~CPU() {
}
CPU::CPU(CPU const& src) {
	*this = src;
}
CPU& CPU::operator=(CPU const& src) {
	static_cast<void>(src);
	return *this;
}

void CPU::update(void) {
	this->setName1();
	this->setName2();
	this->setAmount1();
	this->setAmount2();
}

// GETTERS

std::string CPU::getName1() { // std::string 	getCPUString();
	return this->_cpuString;
}

std::string CPU::getName2() { // std::string	getLoadAverage();
	return this->_loadAverage;
}

int CPU::getAmount1() {
	return this->_cores;
}

std::vector<float> CPU::getAmount2() {
	return this->_usage;
}

// SETTERS

void CPU::setAmount2() { // void setCoreUsage();
	CPUMetrics prev[this->_cores];
	CPUMetrics ticks[this->_cores];

	for (int i = 0; i < this->_cores; i++) {
		prev[i] = calcUsage(i);
	}

	sleep(1);
	std::vector<float> kaka(this->_cores);
	for (int i = 0; i < this->_cores; i++) {
		ticks[i] = calcUsage(i);

		uint64_t used = ticks[i].used() - prev[i].used();
    	uint64_t total = ticks[i].total() - prev[i].total();
		float core_usage = (float)used / (float)total * 100.0f;
		kaka[i] = core_usage;
	}
	this->_usage = kaka;
}

CPU::CPUMetrics CPU::calcUsage(int i_core) {
	processor_cpu_load_info_t cpu_load;
	mach_msg_type_number_t cpu_msg_count;
	natural_t cpu_count;

	host_processor_info(mach_host_self(),
						PROCESSOR_CPU_LOAD_INFO,
						&cpu_count,
						(processor_info_array_t *)&cpu_load,
						&cpu_msg_count);

	uint64_t userTicks = cpu_load[i_core].cpu_ticks[CPU_STATE_USER];
	uint64_t niceTicks = cpu_load[i_core].cpu_ticks[CPU_STATE_NICE];
	uint64_t systemTicks = cpu_load[i_core].cpu_ticks[CPU_STATE_SYSTEM];
	uint64_t idleTicks = cpu_load[i_core].cpu_ticks[CPU_STATE_IDLE];

	CPUMetrics ticks = {userTicks, niceTicks, systemTicks, idleTicks};
	return ticks;
}

void CPU::setAmount1() { // amount of CPU
	int cores;
    size_t bufferlen = 128;

    sysctlbyname("hw.ncpu",&cores,&bufferlen,NULL,0);
	this->_cores = cores;
}

void CPU::setName1() { // void 	setCPUString();
	char buffer[128];
    size_t bufferlen = sizeof(buffer);

    sysctlbyname("machdep.cpu.brand_string",&buffer,&bufferlen,NULL,0);
	this->_cpuString = std::string(buffer);
}

void CPU::setName2() { // void		setLoadAverage();
	double averages[3];
	std::string loadAverage;
	getloadavg(averages, 3);
	
	loadAverage = 
					number_to_string(averages[0]).substr(0, 4) +
					" " + number_to_string(averages[1]).substr(0, 4) +
					" " + number_to_string(averages[2]).substr(0, 4);

	this->_loadAverage = loadAverage;
}

std::string	CPU::getName3(void) { // not use here
	return "null";
}
void		CPU::setName3(void) { // not use here
	return ;
}
