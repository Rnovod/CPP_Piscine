#include "../includes/CatModule.hpp"

CatModule::CatModule() {
}
CatModule::~CatModule() {
}
CatModule::CatModule(CatModule const& src) {
	*this = src;
}
CatModule& CatModule::operator=(CatModule const& src) {
	static_cast<void>(src);
	return *this;
}
