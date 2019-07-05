#ifndef RAM_HPP
#define RAM_HPP

#include "IMonitorModule.hpp"

class RAM : public IMonitorModule {
private:
	std::string _freeMem;
	std::string _totalMem;
	std::string _usedMem;

	int 		_freeMem_int;
	int 		_totalMem_int;
	int 		_usedMem_int;
protected:
public:
	RAM();
	virtual ~RAM();
	RAM& operator=(RAM const& src);
	RAM(RAM const& src);

	void update(void);

	std::string	getName1(void); // total Memory
	std::string	getName2(void); // free Memory
	std::string	getName3(void); // used Memory

	void		setName1(void); // total Memory
	void		setName2(void); // free Memory
	void		setName3(void); // used Memory

	int         getAmount1(void); // not used
	void        setAmount1(void); // not used;

	std::vector<float>	getAmount2(void); // not used
	void				setAmount2(void); // not used

};

#endif
