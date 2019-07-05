#ifndef CATMODULE_HPP
#define CATMODULE_HPP

#include "IMonitorModule.hpp"

class CatModule : public IMonitorModule {
private:
protected:
public:
	CatModule();
	virtual ~CatModule();
	CatModule& operator=(CatModule const& src);
	CatModule(CatModule const& src);
};

#endif
