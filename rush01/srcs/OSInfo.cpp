#include "../includes/OSInfo.hpp"

OSInfo::OSInfo() {
	this->update();
}
OSInfo::~OSInfo() {
}
OSInfo::OSInfo(OSInfo const& src) {
	*this = src;
}
OSInfo& OSInfo::operator=(OSInfo const& src) {
	static_cast<void>(src);
	return *this;
}

void OSInfo::update(void) {
	this->setName1();
	this->setName2();
}

// GETTERS

std::string OSInfo::getName1() { // std::string getOsName();
	return this->_osName;
}

std::string OSInfo::getName2() { // std::string getKernelVersion();
	return this->_kernelVersion;
}

// SETTERS

void OSInfo::setName2() { // void setKernelVersion();
	char str[256];
	size_t size = 256;
	sysctlbyname("kern.osrelease", str, &size, NULL, 0);
	this->_kernelVersion = std::string(str);
}

void OSInfo::setName1() { // void setOsName();
	#ifdef __unix
		this->_osName = "Unix";
	#elif __unix__
		this->_osName = "Unix";
	#elif __APPLE__ || __MACH__
		this->_osName = "Mac OS X";
	#elif __linux__
		this->_osName = "Linux";
	#else
		this->_osName = "Other";
	#endif
}

std::string	OSInfo::getName3(void) { // not use here
	return "null";
}

void		OSInfo::setName3(void) { // not use here
	return ;
}

void		OSInfo::setAmount1(void) { // not use here
	return ;
}

int			OSInfo::getAmount1(void) { // not use here
	return -1;
}

std::vector<float>	OSInfo::getAmount2(void) { // not use here

	return std::vector<float>();
}

void				OSInfo::setAmount2(void) { // not use here
	return ;
}
