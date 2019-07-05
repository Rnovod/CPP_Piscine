#ifndef I_MONITOR_MODULE_H
#define I_MONITOR_MODULE_H

#include <iostream>
#include <fstream>
#include <string>
#include <unistd.h>
#include <netdb.h>
#include <arpa/inet.h>
#include <ifaddrs.h>
#include <sys/sysctl.h>
#include <sstream>
#include <mach/mach_host.h>
#include <mach/processor_info.h>
#include <vector>
#include <math.h>

class IMonitorModule
{
	public:
		virtual void update() = 0;

		virtual std::string	getName1(void) = 0;
		virtual std::string	getName2(void) = 0;
		virtual std::string	getName3(void) = 0;

		virtual int			getAmount1(void) = 0;

		virtual void		setName1(void) = 0;
		virtual void		setName2(void) = 0;
		virtual void		setName3(void) = 0;

		virtual void		setAmount1(void) = 0;

		virtual	std::vector<float>	getAmount2(void) = 0;
		virtual	void				setAmount2(void) = 0;

};

#endif