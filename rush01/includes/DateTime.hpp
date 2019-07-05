#ifndef DATETIME_HPP
#define DATETIME_HPP

#include "IMonitorModule.hpp"

class DateTime : public IMonitorModule {
private:
	std::string _uptime;
	std::string _date;
	std::string _currentTime;
protected:
public:
	DateTime();
	virtual ~DateTime();
	DateTime& operator=(DateTime const& src);
	DateTime(DateTime const& src);

	void update(void);

	std::string	getName1(void); //std::string getUptime();
	std::string	getName2(void); //std::string getDate();
	std::string	getName3(void); //std::string getCurrentTime();

	void		setName1(void); //void setUptime();
	void		setName2(void); //void setDate();
	void		setName3(void); //void setCurrentTime();

	void		setAmount1(void); // not use here	
	int			getAmount1(void); // not use here	

	std::vector<float>	getAmount2(void); // not used
	void				setAmount2(void); // not used

};

#endif
