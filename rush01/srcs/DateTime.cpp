#include "../includes/DateTime.hpp"
#include "../includes/utilities.hpp"

DateTime::DateTime() {
	this->update();
}
DateTime::~DateTime() {
}
DateTime::DateTime(DateTime const& src) {
	*this = src;
}
DateTime& DateTime::operator=(DateTime const& src) {
	static_cast<void>(src);
	return *this;
}

void DateTime::update(void) {
	this->setName1();
	this->setName2();
	this->setName3();
}

// GETTERS

std::string DateTime::getName1() { //std::string getUptime();
	return this->_uptime;
}

std::string DateTime::getName2() { //std::string getDate();
	return this->_date;
}

std::string DateTime::getName3() { //std::string getCurrentTime();
	return this->_currentTime;
}

// SETTERS

void	DateTime::setName1() { //void setUptime();
	std::string 	uptime;
	std::ostringstream os;
    
	struct timespec time_spec;

	clock_gettime(CLOCK_MONOTONIC_RAW, &time_spec);
	uint64_t uptime_uint = time_spec.tv_sec * 1000 + time_spec.tv_nsec / 1000000;

	os << uptime_uint / 1000;
	uptime = os.str();

	time_t seconds(uptime_uint/1000); // you have to convert your input_seconds into time_t
	tm *p = gmtime(&seconds); // convert to broken down time

	uptime = number_to_string(p->tm_yday) +
			" day " + number_to_string(p->tm_hour) +
			" hour(s) " + number_to_string(p->tm_min) +
			" min " + number_to_string(p->tm_sec) + " sec ";

	this->_uptime = uptime;
}

void	DateTime::setName2() { //void setDate();
	time_t now = time(0);
	struct tm tstruct;
	char buf[80];
	tstruct = *localtime(&now);
	strftime(buf, sizeof(buf), "%d.%m.%Y", &tstruct);

	this->_date = std::string(buf);
}

void	DateTime::setName3() { //void setCurrentTime();
	time_t now = time(0);
	struct tm tstruct;
	char buf[80];
	tstruct = *localtime(&now);
	strftime(buf, sizeof(buf), "%X", &tstruct);

	this->_currentTime = std::string(buf);
}

void	DateTime::setAmount1(void) { // not using here
	return ;
}

int		DateTime::getAmount1(void) { // not using here
	return -1;
}

std::vector<float>	DateTime::getAmount2(void) { // not use here

	return std::vector<float>();
}

void				DateTime::setAmount2(void) { // not use here
	return ;
}