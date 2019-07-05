#ifndef OSINFO_HPP
#define OSINFO_HPP

#include "IMonitorModule.hpp"

class OSInfo : public IMonitorModule {
private:
	std::string _osName;
	std::string _kernelVersion;
protected:
public:
	OSInfo();
	virtual ~OSInfo();
	OSInfo& operator=(OSInfo const& src);
	OSInfo(OSInfo const& src);

	void update(void);

	std::string	getName1(void); // std::string getOsName();
	std::string	getName2(void); // std::string getKernelVersion();

	void		setName1(void); // void setOsName();
	void		setName2(void); // void setKernelVersion();


	std::string	getName3(void); // not using here	
	void		setName3(void); // not using here	

	void		setAmount1(void); // not using here	
	int			getAmount1(void); // not using here

	std::vector<float>	getAmount2(void); // not used
	void				setAmount2(void); // not used

};

#endif
