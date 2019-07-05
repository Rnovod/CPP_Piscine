#include "../includes/RAM.hpp"
#include "../includes/utilities.hpp"

RAM::RAM() {
	this->update();
}
RAM::~RAM() {
}
RAM::RAM(RAM const& src) {
	*this = src;
}
RAM& RAM::operator=(RAM const& src) {
	static_cast<void>(src);
	return *this;
}

void RAM::update(void) {
	this->setName1();
	this->setName2();
	this->setName3();
}

// GETTERS

std::string RAM::getName1() { // total Memory
	return this->_totalMem;
}

std::string RAM::getName2() { // free Memory
	return this->_freeMem;
}

std::string RAM::getName3() { // used Memory
	return this->_usedMem;
}

// SETTERS

void	RAM::setName1() { // total Memory
	unsigned long long buffer;
	size_t bufferlen = sizeof(buffer);
	sysctlbyname("hw.memsize", &buffer, &bufferlen, NULL, 0);

	this->_totalMem_int = buffer / 1024 / 1024;
	this->_totalMem = number_to_string(this->_totalMem_int);
}

void	RAM::setName2() { // free Memory
	int buffer;
	size_t bufferlen = sizeof(buffer);
	sysctlbyname("vm.page_free_count", &buffer, &bufferlen, NULL, 0);

	this->_freeMem_int = buffer * 4096 / 1024 / 1024;
	this->_freeMem = number_to_string(this->_freeMem_int);
}

void	RAM::setName3() { // used Memory
	this->_usedMem_int = this->_totalMem_int - this->_freeMem_int;
	this->_usedMem = number_to_string(this->_usedMem_int);
}

int         RAM::getAmount1(void) { // not use here
	return 0;
}
void        RAM::setAmount1(void) {} // not use here

std::vector<float>	RAM::getAmount2(void) { // not use here

	return std::vector<float>();
}

void				RAM::setAmount2(void) { // not use here
	return ;
}
