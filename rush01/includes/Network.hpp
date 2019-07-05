#ifndef NETWORK_HPP
#define NETWORK_HPP

#include "IMonitorModule.hpp"

class Network : public IMonitorModule {
private:
	std::string _packetsIn;
	std::string _packetsOut;
	std::string _parsedString;

	void 		_crapParsingTop();
protected:
public:
	Network();
	virtual ~Network();
	Network& operator=(Network const& src);
	Network(Network const& src);

	void update(void);

	std::string	getName1(void); // Network IN
	std::string	getName2(void); // Network OUT
	

	void		setName1(void); // Network IN
	void		setName2(void); // Network OUT
	

	int         getAmount1(void); // not used
	void        setAmount1(void); // not used;
	std::string	getName3(void); // not used;
	void		setName3(void); // not used;

	std::vector<float>	getAmount2(void); // not used
	void				setAmount2(void); // not used
};

#endif
