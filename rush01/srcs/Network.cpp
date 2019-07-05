#include "../includes/Network.hpp"

Network::Network() {
	this->update();
}
Network::~Network() {
}
Network::Network(Network const& src) {
	*this = src;
}
Network& Network::operator=(Network const& src) {
	static_cast<void>(src);
	return *this;
}

void Network::update(void) {
	this->_crapParsingTop();
	this->setName1();
	this->setName2();
}

void	Network::_crapParsingTop() {
	char	buffer[256];
	FILE*	in;
	std::stringstream ss;

	in = popen("top -l 1 | head -n 9 | grep Network", "r");
	while (fgets(buffer, sizeof(buffer), in) != NULL)
		ss << buffer;
	pclose(in);

	this->_parsedString = ss.str();
}

// GETTERS

std::string Network::getName1() { // Network IN
	return this->_packetsIn;
}

std::string Network::getName2() { // Network OUT
	return this->_packetsOut;
}

// SETTERS

void	Network::setName1() { // Network IN
	std::string word;
    std::stringstream iss(this->_parsedString); 
	int i = 0;

    while (iss >> word) {
		if (i == 2) {
			this->_packetsIn = word;
		}
		i++;
	}
}

void	Network::setName2() { // Network OUT
	std::string word;
    std::stringstream iss(this->_parsedString); 
	int i = 0;

    while (iss >> word) {
		if (i == 4) {
			this->_packetsOut = word;
		}
		i++;
	}
}

// NOT USED

int			Network::getAmount1(void) { // not used;
	return 0;
}
void		Network::setAmount1(void) {} // not used;

std::string	Network::getName3() { // not used;
	return 0;
}

void		Network::setName3() {} // not used;

std::vector<float>	Network::getAmount2(void) { // not use here

	return std::vector<float>();
}

void				Network::setAmount2(void) { // not use here
	return ;
}