#include "../includes/UserHost.hpp"

UserHost::UserHost() {
	this->update();
}
UserHost::~UserHost() {
}
UserHost::UserHost(UserHost const& src) {
	*this = src;
}
UserHost& UserHost::operator=(UserHost const& src) {
	static_cast<void>(src);
	return *this;
}

void UserHost::update(void) {
	setName1();
	setName2();
	setName3();
}

// GETTERS

std::string UserHost::getName1() { // std::string	getUserName();
	return this->_UserName;
}

std::string UserHost::getName2() { // std::string	getHostName();
	return this->_HostName;
}

std::string UserHost::getName3() { // std::string	getIpAddress();
	return this->_IpAddress;
}

// SETTERS

void	UserHost::setName1() { // void		setUserName();
	this->_UserName = std::string(getlogin());
}

void	UserHost::setName2() { // void		setHostName();
	char hostname[_POSIX_HOST_NAME_MAX];
	gethostname(hostname, _POSIX_HOST_NAME_MAX );

	this->_HostName = std::string(hostname);
}

void	UserHost::setName3() { // void		setIpAddress();
	struct ifaddrs * ifAddrStruct=NULL;
	struct ifaddrs * ifa=NULL;
	void * tmpAddrPtr=NULL;
	char addressBuffer[INET_ADDRSTRLEN];

	getifaddrs(&ifAddrStruct);
	for (ifa = ifAddrStruct; ifa != NULL; ifa = ifa->ifa_next) {
		if (!ifa->ifa_addr) {
			continue;
		}
		if (ifa->ifa_addr->sa_family == AF_INET) {
			tmpAddrPtr=&(reinterpret_cast<struct sockaddr_in*>(ifa->ifa_addr))->sin_addr;
			inet_ntop(AF_INET, tmpAddrPtr, addressBuffer, INET_ADDRSTRLEN);
		}
	}
	if (ifAddrStruct!=NULL) {
		freeifaddrs(ifAddrStruct);
	}
	this->_IpAddress = addressBuffer;
}

void	UserHost::setAmount1(void) { // not use here
	return ;
}

int		UserHost::getAmount1(void) { // not use here
	return -1;
}

std::vector<float>	UserHost::getAmount2(void) { // not use here

	return std::vector<float>();
}

void				UserHost::setAmount2(void) { // not use here
	return ;
}
