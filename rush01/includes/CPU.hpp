#ifndef CPU_HPP
#define CPU_HPP

#include "IMonitorModule.hpp"

class CPU : public IMonitorModule {
private:
	struct CPUMetrics {
			uint64_t usertime;
			uint64_t nicetime;
			uint64_t systemtime;
			uint64_t idletime;

			uint64_t used() { return usertime + nicetime + systemtime; }
			uint64_t total() { return usertime + nicetime + systemtime + idletime; }
	};

	std::string 		_cpuString;
	std::string 		_loadAverage;
	int					_cores;
	std::vector<float> _usage;

public:
	CPU();
	virtual ~CPU();
	CPU& operator=(CPU const& src);
	CPU(CPU const& src);

	void			update(void);
	CPUMetrics 		calcUsage(int);

	std::string			getName1(void); // std::string 	getCPUString();
	std::string			getName2(void); // std::string	getLoadAverage();
	int					getAmount1(void); // int	getCoresAmount();
	std::vector<float>  getAmount2(void); // getCoreUsage

	void		setName1(void); // void 	setCPUString();
	void		setName2(void); // void		setLoadAverage();
	void		setAmount1(void); // void	setCoresAmount();
	void		setAmount2(void); // void setCoreUsage();

	std::string	getName3(void); // not use here
	void		setName3(void); // not use here

};

#endif
