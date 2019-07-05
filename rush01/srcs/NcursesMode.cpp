#include "../includes/NcursesMode.hpp"
#include "utilities.hpp"
#include "GraphicalMode.hpp"

NcursesMode::NcursesMode() {
}
NcursesMode::NcursesMode(IMonitorModule **modules) {
	for (int i = 0; i < N_MODUL; ++i) {
		if (modules[i]) {
			this->_modules[i] = modules[i];
		} else {
			throw std::logic_error("No module");
		}
	}
}
NcursesMode::~NcursesMode() {
}
NcursesMode::NcursesMode(NcursesMode const& src) {
	*this = src;
}
NcursesMode& NcursesMode::operator=(NcursesMode const& src) {
	static_cast<void>(src);
	return *this;
}

bool		NcursesMode::_RunGraphicalMode(void) {

	GraphicalMode		gm(_modules);

	return gm.run();;
}

void	NcursesMode::_pairColors(void) {
	start_color();
	init_pair(1, COLOR_YELLOW, COLOR_BLACK);
	init_pair(2, COLOR_GREEN, COLOR_BLACK);
	init_pair(3, COLOR_RED, COLOR_BLACK);
	init_pair(4, COLOR_GREEN, COLOR_GREEN);
	init_pair(8, COLOR_YELLOW, COLOR_YELLOW);
	init_pair(5, COLOR_RED, COLOR_RED);
	init_pair(6, COLOR_BLUE, COLOR_BLACK);
	init_pair(7, COLOR_YELLOW, COLOR_BLUE);
	init_pair(9, COLOR_BLACK, COLOR_WHITE);
	init_pair(10, COLOR_BLUE, COLOR_BLUE);
	init_pair(11, COLOR_CYAN, COLOR_CYAN);
	init_pair(12, COLOR_YELLOW, COLOR_BLACK);
	
}

bool NcursesMode::run() {
	initscr();
	noecho();

	nodelay(stdscr, TRUE);
	curs_set(0);

	bool	ret;
	this->_pairColors();

	while (1) {
		// update all
		this->_updateAllModules();
		// show all
		this->displayInfo();
		int ch = getch();
		if (ch == 'q'){
			endwin();
			break ;
		} else if (ch == 32) {
			ret = _RunGraphicalMode();
		}
		if (ret == true) {
			endwin();
			break ;
		}
	}
	return false;
}

void NcursesMode::_updateAllModules() {
	for (int i = 0; i < N_MODUL; ++i) {
		this->_modules[i]->update();
	}
}

void NcursesMode::_UserHost() {
	int number = 0;

	WINDOW *win = newwin(HEIGHT_N, WIDTH_N, DIST * number, 0);
	wattron(win, COLOR_PAIR(11));
	box(win, 0, 0);
	wattroff(win, COLOR_PAIR(11));

	wattron(win, COLOR_PAIR(HEADER));
	mvwaddstr(win, 1, 5, "USER HOST MODULE");
	wattroff(win, COLOR_PAIR(HEADER));

	mvwaddstr(win, 3, 2, "Username:");
	wattron(win, COLOR_PAIR(2));
	mvwaddstr(win, 3, 13, this->_modules[number]->getName1().c_str());
	wattroff(win, COLOR_PAIR(2));

	mvwaddstr(win, 5, 2, "Hostname:");
	wattron(win, COLOR_PAIR(2));
	mvwaddstr(win, 5, 13, this->_modules[number]->getName2().c_str());
	wattroff(win, COLOR_PAIR(2));

	mvwaddstr(win, 7, 2, "IP Adress:");
	wattron(win, COLOR_PAIR(2));
	mvwaddstr(win, 7, 13, this->_modules[number]->getName3().c_str());
	wattroff(win, COLOR_PAIR(2));

	wrefresh(win);
}

void NcursesMode::_OSInfo() {
	int number = 1;

	WINDOW *win = newwin(HEIGHT_N - 2, WIDTH_N, (DIST * number) + 3 , 0);
	wattron(win, COLOR_PAIR(4));
	box(win, 0, 0);
	wattroff(win, COLOR_PAIR(4));

	wattron(win, COLOR_PAIR(HEADER));
	mvwaddstr(win, 1, 5, "OS INFO MODULE");
	wattroff(win, COLOR_PAIR(HEADER));

	mvwaddstr(win, 3, 2, "OS Name:");
	wattron(win, COLOR_PAIR(YELLOW));
	mvwaddstr(win, 3, 18, this->_modules[number]->getName1().c_str());
	wattroff(win, COLOR_PAIR(YELLOW));

	mvwaddstr(win, 5, 2, "Kernel Version:");
	wattron(win, COLOR_PAIR(YELLOW));
	mvwaddstr(win, 5, 18, this->_modules[number]->getName2().c_str());
	wattroff(win, COLOR_PAIR(YELLOW));

	wrefresh(win);
}

void NcursesMode::_DateTime() {
	int number = 2;

	WINDOW *win = newwin(HEIGHT_N + 1, WIDTH_N, (DIST * number) - 2 + 3, 0);
	wattron(win, COLOR_PAIR(5));
	box(win, 0, 0);
	wattroff(win, COLOR_PAIR(5));

	wattron(win, COLOR_PAIR(HEADER));
	mvwaddstr(win, 1, 5, "DATE TIME MODULE");
	wattroff(win, COLOR_PAIR(HEADER));

	mvwaddstr(win, 3, 2, "System Uptime:");
	wattron(win, COLOR_PAIR(YELLOW));
	mvwaddstr(win, 4, 2, this->_modules[number]->getName1().c_str());
	wattroff(win, COLOR_PAIR(YELLOW));

	mvwaddstr(win, 6, 2, "Current Date:");
	wattron(win, COLOR_PAIR(YELLOW));
	mvwaddstr(win, 6, 16, this->_modules[number]->getName2().c_str());
	wattroff(win, COLOR_PAIR(YELLOW));

	mvwaddstr(win, 8, 2, "Current Time:");
	wattron(win, COLOR_PAIR(YELLOW));
	mvwaddstr(win, 8, 16, this->_modules[number]->getName3().c_str());
	wattroff(win, COLOR_PAIR(YELLOW));

	wrefresh(win);
}

void NcursesMode::_CPU() {
	int number = 3;

	WINDOW *win = newwin((HEIGHT_N * 2)+1, WIDTH_N * 2, DIST + 3, WIDTH_N + 5);
	wattron(win, COLOR_PAIR(BLUE));
	box(win, 0, 0);
	wattroff(win, COLOR_PAIR(BLUE));

	wattron(win, COLOR_PAIR(HEADER));
	mvwaddstr(win, 1, 5, "CPU MODULE");
	wattroff(win, COLOR_PAIR(HEADER));

	mvwaddstr(win, 3, 2, "CPU Brand:");
	wattron(win, COLOR_PAIR(YELLOW));
	mvwaddstr(win, 4, 2, this->_modules[number]->getName1().c_str());
	wattroff(win, COLOR_PAIR(YELLOW));

	mvwaddstr(win, 3, WIDTH_N + 18 , "Load average:");
	wattron(win, COLOR_PAIR(YELLOW));
	mvwaddstr(win, 4, WIDTH_N + 18, this->_modules[number]->getName2().c_str());
	wattroff(win, COLOR_PAIR(YELLOW));

	mvwaddstr(win, 6, 2, "Number of cores:");
	wattron(win, COLOR_PAIR(YELLOW));
	mvwaddstr(win, 6, 2 + 17, number_to_string(this->_modules[number]->getAmount1()).c_str());
	wattroff(win, COLOR_PAIR(YELLOW));

	std::vector<float> usage = this->_modules[3]->getAmount2();
	float ratio = 2.00;

	int line = 1;
	float max_bars = usage.at(0);
	mvwaddstr(win, 16, FIRST, "Core 1");

	for(float bar = 1.00; bar < max_bars; bar *= ratio) {
		mvwaddstr(win, 15 - line, FIRST, "~~~~~");
		line++;
	}

	line = 1;
	max_bars = usage.at(1);
	mvwaddstr(win, 16, SECOND, "Core 2");

	for(float bar = 1.00; bar < max_bars; bar *= ratio) {
		mvwaddstr(win, 15 - line, SECOND, "~~~~~");
		line++;
	}

	line = 1;
	max_bars = usage.at(2);
	mvwaddstr(win, 16, THIRD, "Core 3");

	for(float bar = 1.00; bar < max_bars; bar *= ratio) {
		mvwaddstr(win, 15 - line, THIRD, "~~~~~");
		line++;
	}

	line = 1;
	max_bars = usage.at(3);
	mvwaddstr(win, 16, FOURTH, "Core 4");

	for(float bar = 1.00; bar < max_bars; bar *= ratio) {
		mvwaddstr(win, 15 - line, FOURTH, "~~~~~");
		line++;
	}

	wrefresh(win);
}

void NcursesMode::_RAM() {
	int number = 4;

	WINDOW *win = newwin(HEIGHT_N, WIDTH_N, 12 + 3, WIDTH_N + 10 + WIDTH_N * 2);
	wattron(win, COLOR_PAIR(5));
	box(win, 0, 0);
	wattroff(win, COLOR_PAIR(5));

	wattron(win, COLOR_PAIR(HEADER));
	mvwaddstr(win, 1, 5, "RAM MODULE");
	wattroff(win, COLOR_PAIR(HEADER));

	mvwaddstr(win, 3, 2, "Total Memory:      Mb");
	wattron(win, COLOR_PAIR(YELLOW));
	mvwaddstr(win, 3, 16, this->_modules[number]->getName1().c_str());
	wattroff(win, COLOR_PAIR(YELLOW));

	mvwaddstr(win, 5, 2, "Used:");
	wattron(win, COLOR_PAIR(RED));
	mvwaddstr(win, 5, 8, this->_modules[number]->getName3().c_str());
	wattroff(win, COLOR_PAIR(RED));

	mvwaddstr(win, 5, 15, "Free:");
	wattron(win, COLOR_PAIR(GREEN));
	mvwaddstr(win, 5, 21, this->_modules[number]->getName2().c_str());
	wattroff(win, COLOR_PAIR(GREEN));

	wrefresh(win);
}

void NcursesMode::_Network() {
	int number = 5;

	WINDOW *win = newwin(HEIGHT_N, WIDTH_N, 23 + 3, WIDTH_N + 10 + WIDTH_N * 2);
	wattron(win, COLOR_PAIR(4));
	box(win, 0, 0);
	wattroff(win, COLOR_PAIR(4));

	wattron(win, COLOR_PAIR(HEADER));
	mvwaddstr(win, 1, 5, "Network MODULE");
	wattroff(win, COLOR_PAIR(HEADER));

	mvwaddstr(win, 3, 2, "Packets IN");
	wattron(win, COLOR_PAIR(YELLOW));
	mvwaddstr(win, 4, 2, this->_modules[number]->getName1().c_str());
	wattroff(win, COLOR_PAIR(YELLOW));

	mvwaddstr(win, 6, 2, "Packets OUT");
	wattron(win, COLOR_PAIR(YELLOW));
	mvwaddstr(win, 7, 2, this->_modules[number]->getName2().c_str());
	wattroff(win, COLOR_PAIR(YELLOW));

	wrefresh(win);
}

void	NcursesMode::_UNIT_Logo() {
	WINDOW *win = newwin(13, 115, 0, WIDTH_N + 2);
	wattron(win, COLOR_PAIR(8));
	box(win, 0, 0);
	wattroff(win, COLOR_PAIR(8));

	std::ifstream input("srcs/unit_logo.ascii");
	std::string line;
	int i = 1;
	// mvwaddstr(win, 3, 3, );
	
	if (input.is_open()) {
		wattron(win, COLOR_PAIR(12));
		for (std::string line; std::getline(input, line ); ) {
			mvwaddstr(win, i, 2, line.c_str());
			i++;
		}
		wattroff(win, COLOR_PAIR(12));
	}
	input.close();
	wrefresh(win);
}

void	NcursesMode::_Cat() {
	WINDOW *win = newwin(9, 50, 37, 50);
	wattron(win, COLOR_PAIR(YELLOW));
	box(win, 0, 0);
	wattroff(win, COLOR_PAIR(YELLOW));

	std::ifstream input("srcs/cat.ascii");
	std::string line;
	int i = 1;
	// mvwaddstr(win, 3, 3, );
	
	if (input.is_open()) {
		wattron(win, COLOR_PAIR(12));
		for (std::string line; std::getline(input, line ); ) {
			mvwaddstr(win, i, 2, line.c_str());
			i++;
		}
		wattroff(win, COLOR_PAIR(12));
	}
	input.close();
	wrefresh(win);
}


void NcursesMode::displayInfo() {
	this->_UNIT_Logo();
	this->_UserHost();
	this->_OSInfo();
	this->_DateTime();
	this->_CPU();
	this->_RAM();
	this->_Network();
	this->_Cat();

	WINDOW *win = newwin(5, 30, 40, 2);

	wattron(win, COLOR_PAIR(9));
	mvwaddstr(win, 1, 2, "                       ");
	mvwaddstr(win, 2, 2, "     Press SPACE       ");
	mvwaddstr(win, 3, 2, " to enter Graphic Mode ");
	mvwaddstr(win, 4, 2, "                       ");
	wattroff(win, COLOR_PAIR(9));

	wrefresh(win);
}

void NcursesMode::keyPressed() {

}