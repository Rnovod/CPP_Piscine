#include "UserHost.hpp"
#include "OSInfo.hpp"
#include "DateTime.hpp"
#include "CPU.hpp"
#include "RAM.hpp"
#include "Network.hpp"
#include "NcursesMode.hpp"
#include "../includes/CatModule.hpp"

void		RunNcursesMode(IMonitorModule **modules) {
	NcursesMode		ncurs(modules);

	ncurs.run();
}

int main(/* int ac, char **av */) {
	UserHost	userHost;
	OSInfo		osInfo;
	DateTime	dateTime;
	CPU			cpu;
	RAM			ram;
	Network		net;

	IMonitorModule	*modules[N_MODUL];

	modules[0] = &userHost;
	modules[1] = &osInfo;
	modules[2] = &dateTime;
	modules[3] = &cpu;
	modules[4] = &ram;
	modules[5] = &net;
	// if (ac > 1) {
	// 	std::string arg(av[1]);
	// 	if (arg == "n") {
	RunNcursesMode(modules);
	// 	} else {
	// 		std::cout << "Wrong argument" << std::endl;
	// 		std::cout << "Usage:" << std::endl;
	// 		std::cout << "./ft_gkrellm without args to enable GUI" << std::endl;
	// 		std::cout << "./ft_gkrellm -n to enable Ncurses mode" << std::endl;
	// 		exit (0);
	// 	}
	// }

	// // all prints just for debug purposes
	// std::cout << ">> User Host module <<" << std::endl;
	// std::cout << "Username: " << userHost.getName1() << std::endl; // userHost.getUserName() 
	// std::cout << "Hostname: " <<  userHost.getName2() << std::endl; //  getHostName()
	// std::cout << "IP address: " <<  userHost.getName3() << std::endl; // getIpAddress()

	// std::cout << std::endl;
	// std::cout << ">> OS Info module <<" << std::endl;
	// std::cout << "OS Name: " <<  osInfo.getName1() << std::endl;  // getOsName()
	// std::cout << "Kernel Version: " <<  osInfo.getName2() << std::endl;  // getKernelVersion()

	// std::cout << std::endl;
	// std::cout << ">> Date Time module <<" << std::endl;
	// std::cout << "Uptime: " << dateTime.getName1() << std::endl;  // getUptime()
	// std::cout << "Date: " << dateTime.getName2() << std::endl;  // getDate()
	// std::cout << "Time now: " << dateTime.getName3() << std::endl;  // getCurrentTime()

	// std::cout << std::endl;
	// std::cout << ">> CPU module <<" << std::endl;
	// std::cout << "CPU: " << cpu.getName1() << std::endl;  // getCPUString()
	// std::cout << std::endl << "Load Average: " << std::endl;
	// std::cout << "1min 5min 15min" << std::endl;
	// std::cout << cpu.getName2() << std::endl;  // getLoadAverage()
	// std::cout << "Cores amount: " << cpu.getAmount1() << std::endl;  // getCoresAmount()

	// std::vector<float> kaka = cpu.getAmount2();
	// std::cout << "Cores usage: " << std::endl;
	// for (int i = 0; i < 4; i++) {
	// 	std::cout << printf("%.1f", kaka.at(i)) << std::endl;
	// }
	
	// std::cout << std::endl;
	// std::cout << ">> RAM module <<" << std::endl;
	// std::cout << "Total memory: " << ram.getName1() << std::endl;  // total Memory
	// std::cout << "Free memory: " << ram.getName2() << std::endl;  // free Memory
	// std::cout << "Used memory: " << ram.getName3() << std::endl;  // used Memory

	// std::cout << std::endl;
	// std::cout << ">> Network module <<" << std::endl;
	// std::cout << "Packets in: " << net.getName1() << std::endl;  // Network IN
	// std::cout << "Packets out: " << net.getName2() << std::endl;  // Network OUT

	// // end of debug
}