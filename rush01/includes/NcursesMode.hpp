#ifndef NCURSESMODE_HPP
#define NCURSESMODE_HPP

# include "IMonitorModule.hpp"
# include "IMonitorDisplay.hpp"
# include <ncurses.h>

# define HEIGHT_N 10
# define WIDTH_N 35
# define DIST 12

# define HEADER 9
# define YELLOW 1
# define GREEN 2
# define RED 3
# define BLUE 10

# define FIRST 20
# define SECOND 28
# define THIRD 36
# define FOURTH 44

class NcursesMode : public IMonitorDisplay {

public:
	NcursesMode();
	NcursesMode(IMonitorModule **modules);
	virtual ~NcursesMode();
	NcursesMode& operator=(NcursesMode const& src);
	NcursesMode(NcursesMode const& src);

	bool	run(void);
	void	displayInfo(void);
	void	keyPressed(void);
private:
	void	_updateAllModules(void);
	void	_pairColors(void);
	void	_UNIT_Logo(void);

	void	_UserHost(void);
	void	_OSInfo(void);
	void	_DateTime(void);
	void	_CPU(void);
	void	_RAM(void);
	void	_Network(void);
	void	_Cat(void);

	bool	_RunGraphicalMode(void);

};

#endif
