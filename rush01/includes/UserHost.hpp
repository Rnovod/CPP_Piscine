#ifndef USERHOST_HPP
#define USERHOST_HPP

#include "IMonitorModule.hpp"

class UserHost : public IMonitorModule {
private:
	std::string	_UserName;
	std::string	_HostName;
	std::string	_IpAddress;
protected:
public:
	UserHost();
	virtual ~UserHost();
	UserHost& operator=(UserHost const& src);
	UserHost(UserHost const& src);

	void		update(void);

	std::string	getName1(void); // std::string	getUserName();
	std::string	getName2(void); // std::string	getHostName();
	std::string	getName3(void); // std::string	getIpAddress();

	void		setName1(void); // void		setUserName();
	void		setName2(void); // void		setHostName();
	void		setName3(void); // void		setIpAddress();

	void		setAmount1(void); // not use here	
	int			getAmount1(void); // not use here	

	std::vector<float>	getAmount2(void); // not used
	void				setAmount2(void); // not used

};

#endif
