#include "../includes/GraphicalMode.hpp"
#include "../includes/utilities.hpp"

GraphicalMode::GraphicalMode(IMonitorModule **modules) {

	SDL_Surface	*sur;

	for (int i = 0; i < N_MODUL; ++i) {
		if (modules[i]) {
			this->_modules[i] = modules[i];
		} else {
			throw std::logic_error("No module");
		}
	}
	if (SDL_Init(SDL_INIT_EVERYTHING) != 0)
		throw std::logic_error(SDL_GetError());
	if (IMG_Init(IMG_INIT_JPG | IMG_INIT_PNG) != (IMG_INIT_JPG | IMG_INIT_PNG))
		throw std::logic_error(IMG_GetError());
	if (TTF_Init() == -1)
		throw std::logic_error(TTF_GetError());
	if (!(this->_win = SDL_CreateWindow("ft_gkrellm", SDL_WINDOWPOS_CENTERED,
		SDL_WINDOWPOS_CENTERED, WIDTH, HEIGHT, 0)))
		throw std::logic_error(SDL_GetError());
	if (!(this->_rend = SDL_CreateRenderer(this->_win, -1, SDL_RENDERER_TARGETTEXTURE)))
		throw std::logic_error(SDL_GetError());
	if (!(this->_font = TTF_OpenFont("font/Roboto-black.ttf", SIZE_TEXT)))
		throw std::logic_error(TTF_GetError());
	if (!(sur = IMG_Load("img/icon.png")))
		throw std::logic_error(IMG_GetError());
	SDL_SetWindowIcon(this->_win, sur);
	SDL_FreeSurface(sur);
	_quit = false;		//	if true, quit from programm
	_offMode = false;	//	if true, quit from mode
	_createBackground();
	for (int core = 0; core < 4; ++core)
	{
		for (int i = 0; i < CPU_TIME + 1; ++i)
			_cores[core].points[i] = 0.0f;
	}
	_ratio = CPU_TIME / 100;
	_cat[0] = _load_texture("img/cat1.png");
	_cat[1] = _load_texture("img/cat2.png");
	_cat[2] = _load_texture("img/cat3.png");
	_cat[3] = _load_texture("img/cat4.png");
	_cat[4] = _load_texture("img/cat5.png");
	_cat[5] = _load_texture("img/cat6.png");
	_cat[6] = _load_texture("img/cat7.png");
	_cat[7] = _load_texture("img/cat8.png");
	_grass = _load_texture("img/grass.png");
	return ;
}

SDL_Texture		*GraphicalMode::_load_texture(const char *file)
{
	SDL_Surface	*sur;
	SDL_Texture	*cat;

	if (!(sur = IMG_Load(file)))
		throw std::logic_error(IMG_GetError());
	if (!(cat = SDL_CreateTextureFromSurface(this->_rend, sur)))
	{
		SDL_FreeSurface(sur);
		throw std::logic_error(SDL_GetError());
	}
	SDL_FreeSurface(sur);
	return cat;
}

void	GraphicalMode::_add_text(const char *text, const int x, const int y) {

	SDL_Surface		*sur_ttf;
	SDL_Texture		*tex_ttf;
	SDL_Rect		dst_rect;

	if (TTF_SizeText(this->_font, text, &dst_rect.w, &dst_rect.h) == -1)
		throw std::logic_error(TTF_GetError());
	if (!(sur_ttf = TTF_RenderText_Blended(this->_font, text,
		(SDL_Color){TEXT_R, TEXT_G, TEXT_B, 0})))
		throw std::logic_error(TTF_GetError());
	if (!(tex_ttf = SDL_CreateTextureFromSurface(this->_rend, sur_ttf)))
		throw std::logic_error(SDL_GetError());
	SDL_FreeSurface(sur_ttf);
	dst_rect.x = x - dst_rect.w / 2;
	dst_rect.y = y;
	if (SDL_RenderCopy(this->_rend, tex_ttf, NULL, &dst_rect) < 0)
		throw std::logic_error(SDL_GetError());
	SDL_DestroyTexture(tex_ttf);
}

void	GraphicalMode::_drawRectWithGrid(const float from_x, const float to_x,
		const float from_y, const float to_y, const int n_core)
{
	float	size_w = to_x - from_x;
	float	size_h = to_y - from_y;
	float	step_x = size_w / CPU_TIME;
	float	step_y = size_h / CPU_TIME;

	this->_cores[n_core].x = from_x;
	this->_cores[n_core].y = from_y;
	this->_cores[n_core].h = size_h;
	this->_cores[n_core].w = size_w;
	this->_cores[n_core].step_x = step_x;
	this->_cores[n_core].step_y = step_y;
	for (float y = from_y; y < to_y; ++y)
	{
		if (SDL_SetRenderDrawColor(this->_rend, 0, 0, 0, 0) < 0)
			throw std::logic_error(SDL_GetError());
		if (SDL_RenderDrawLine(this->_rend, from_x, y, to_x, y) < 0)
			throw std::logic_error(SDL_GetError());
	}
	if (SDL_SetRenderDrawColor(this->_rend, 0, 0x42, 0, 0) < 0)
		throw std::logic_error(SDL_GetError());

	for (float x = from_x; x < to_x; x += step_x) {
		if (SDL_RenderDrawLine(this->_rend, x, from_y, x, to_y) < 0)
			throw std::logic_error(SDL_GetError());
	}
	if (SDL_RenderDrawLine(this->_rend, to_x, from_y, to_x, to_y) < 0)
		throw std::logic_error(SDL_GetError());

	for (float y = from_y; y < to_y; y += step_y) {
		if (SDL_RenderDrawLine(this->_rend, from_x, y, to_x, y) < 0)
			throw std::logic_error(SDL_GetError());
	}
	if (SDL_RenderDrawLine(this->_rend, from_x, to_y, to_x, to_y) < 0)
		throw std::logic_error(SDL_GetError());
}


void	GraphicalMode::_drawRects(const int from_x, const int to_x,
		const int from_y, const int to_y)
{
	int		color;

	for (int y = from_y; y < to_y; ++y)
	{
		color = gradient(COLOR_TO, COLOR_FROM, procent(y, from_y, to_y));
		if (SDL_SetRenderDrawColor(this->_rend, getRvalue(color), getGvalue(color), getBvalue(color), 0) < 0)
			throw std::logic_error(SDL_GetError());
		if (SDL_RenderDrawLine(this->_rend, from_x, y, to_x, y) < 0)
			throw std::logic_error(SDL_GetError());
	}
}

void	GraphicalMode::_leftColumn(void) {

	int	from_x = BORDER;
	int	to_x = SIZEW_LMODULE - BORDER;
	int	from_y = BORDER;
	int	to_y = SIZEH_LMODULE - BORDER;

	_drawRects(from_x, to_x, from_y, to_y);
	_add_text("User name:", to_x / 2, from_y + BORDER);
	_add_text(this->_modules[0]->getName1().c_str(), to_x / 2, from_y + SIZE_TEXT + BORDER);
	_add_text("Host name:", to_x / 2, from_y + SIZE_TEXT * 3);
	_add_text(this->_modules[0]->getName2().c_str(), to_x / 2, from_y + SIZE_TEXT * 4 + BORDER);
	_add_text("IP address:", to_x / 2, from_y + SIZE_TEXT * 6);
	_add_text(this->_modules[0]->getName3().c_str(), to_x / 2, from_y + SIZE_TEXT * 7 + BORDER);
	from_y = to_y + BORDER;
	to_y += SIZEH_LMODULE;
	_drawRects(from_x, to_x, from_y, to_y);
	_add_text("OS name:", to_x / 2, from_y + SIZE_TEXT * 2);
	_add_text(this->_modules[1]->getName1().c_str(), to_x / 2, from_y + SIZE_TEXT * 3 + BORDER);
	_add_text("Kernel version:", to_x / 2, from_y + SIZE_TEXT * 5);
	_add_text(this->_modules[1]->getName2().c_str(), to_x / 2, from_y + SIZE_TEXT * 6 + BORDER);
	from_y = to_y + BORDER;
	to_y += SIZEH_LMODULE;
	_drawRects(from_x, to_x, from_y, to_y);
	_add_text("Uptime:", to_x / 2, from_y + BORDER * 2);
	_add_text("Date:", to_x / 2, from_y + SIZE_TEXT * 3 + BORDER * 2);
	_add_text("Current Time:", to_x / 2, from_y + SIZE_TEXT * 6 + BORDER * 2);
	return ;
}

void	GraphicalMode::_centralColumn(void) {

	int	from_x = SIZEW_LMODULE;
	int	to_x = from_x + SIZEW_CMODULE - BORDER;
	int	from_y = BORDER;
	int	to_y = MODULS_HPLANE - BORDER;

	_drawRects(from_x, to_x, from_y, to_y);
	_add_text("Processor:", SIZEW_CMODULE, from_y + SIZE_TEXT * 2);
	_add_text(this->_modules[3]->getName1().c_str(), SIZEW_CMODULE, from_y + SIZE_TEXT * 3 + BORDER);
	_add_text("Average load:", SIZEW_CMODULE, BORDER + SIZE_TEXT * 6);

	_add_text("rnovodra", SIZEW_CMODULE - BORDER * 52, from_y + SIZE_TEXT - BORDER * 2);
	_add_text("vliubko", SIZEW_CMODULE + BORDER * 52, from_y + SIZE_TEXT - BORDER * 2);


	from_y = SIZEH_LMODULE + BORDER * 4;
	to_y = from_y + SIZEH_LMODULE - BORDER * 10;
	from_x = SIZEW_LMODULE + BORDER * 5;
	to_x = SIZEW_CMODULE - BORDER * 5;

	int	centr = from_x + (to_x - from_x) / 2;
	_drawRectWithGrid(from_x, to_x, from_y, to_y, 0);
	_add_text("Core 1:", centr - BORDER * 8, SIZEH_LMODULE - SIZE_TEXT);

	from_y = SIZEH_LMODULE * 2 + BORDER * 4;
	to_y = from_y + SIZEH_LMODULE - BORDER * 10;
	_drawRectWithGrid(from_x, to_x, from_y, to_y, 1);
	_add_text("Core 2:", centr - BORDER * 8, SIZEH_LMODULE * 2 - SIZE_TEXT);

	from_y = SIZEH_LMODULE + BORDER * 4;
	to_y = from_y + SIZEH_LMODULE - BORDER * 10;
	from_x = SIZEW_LMODULE * 2 + BORDER * 5;
	to_x = SIZEW_CMODULE + SIZEW_LMODULE - BORDER * 5;
	centr = from_x + (to_x - from_x) / 2;
	_drawRectWithGrid(from_x, to_x, from_y, to_y, 2);
	_add_text("Core 3:", centr - BORDER * 8, SIZEH_LMODULE - SIZE_TEXT);

	from_y = SIZEH_LMODULE * 2 + BORDER * 4;
	to_y = from_y + SIZEH_LMODULE - BORDER * 10;
	_drawRectWithGrid(from_x, to_x, from_y, to_y, 3);
	_add_text("Core 4:", centr - BORDER * 8, SIZEH_LMODULE * 2 - SIZE_TEXT);
	return ;
}

void	GraphicalMode::_rightColumn(void) {

	int	from_x = SIZEW_LMODULE + SIZEW_CMODULE;
	int	to_x = WIDTH - BORDER;
	int	from_y = BORDER;
	int	to_y = SIZEH_RMODULE - BORDER;
	int	centr = from_x - (from_x - to_x) / 2;

	_drawRects(from_x, to_x, from_y, to_y);
	_add_text("Total memory:", centr, from_y + SIZE_TEXT * 2);
	_add_text(this->_modules[4]->getName1().c_str(), centr, from_y + SIZE_TEXT * 3 + BORDER);
	_add_text("Free memory:", centr, from_y + SIZE_TEXT * 6);
	_add_text("Used memory:", centr, from_y + SIZE_TEXT * 10);
	from_y = to_y + BORDER;
	to_y += SIZEH_RMODULE;
	_drawRects(from_x, to_x, from_y, to_y);
	_add_text("Network", centr, from_y + SIZE_TEXT + BORDER);
	_add_text("IN:", centr, from_y + SIZE_TEXT * 5);
	_add_text("OUT:", centr, from_y + SIZE_TEXT * 9);
	return ;
}


void	GraphicalMode::_createBackground(void) {

	if (!(this->_background = SDL_CreateTexture(this->_rend, SDL_PIXELFORMAT_ARGB8888,
		SDL_TEXTUREACCESS_TARGET, WIDTH, HEIGHT)))
		throw std::logic_error(SDL_GetError());
	if (SDL_SetRenderTarget(this->_rend, this->_background) < 0)
		throw std::logic_error(SDL_GetError());
	SDL_RenderClear(this->_rend);
	_leftColumn();
	_centralColumn();
	_rightColumn();	
	if (SDL_SetRenderTarget(this->_rend, NULL) < 0)
		throw std::logic_error(SDL_GetError());
}

GraphicalMode::GraphicalMode(void) {
	return ;
}

GraphicalMode::GraphicalMode(GraphicalMode const &) {

	return ;
}

GraphicalMode::~GraphicalMode(void) {

	TTF_CloseFont(this->_font);
	for (int i = 0; i < 8; ++i)
		SDL_DestroyTexture(this->_cat[i]);
	SDL_DestroyTexture(this->_grass);
	SDL_DestroyTexture(this->_background);
	SDL_DestroyRenderer(this->_rend);
	SDL_DestroyWindow(this->_win);
	IMG_Quit();
	TTF_Quit();
	SDL_Quit();
	return ;
}


GraphicalMode &	GraphicalMode::operator=(GraphicalMode const &) {

	return *this;
}

void		GraphicalMode::displayInfo(void) {

	this->_modules[2]->setName1(); // time
	this->_modules[2]->setName2(); // time
	this->_modules[2]->setName3(); // time

	this->_modules[3]->setName2(); // Average load
	this->_modules[3]->setAmount2(); // Average CPU

	this->_modules[4]->setName2(); // Used memory
	this->_modules[4]->setName3(); // Free memory

	this->_modules[5]->update(); // Network IN
	return ;
}


void		GraphicalMode::keyPressed(void) {

	if (this->_event.key.keysym.sym == SDLK_q)
		_quit = true;
	else if (this->_event.key.keysym.sym == SDLK_ESCAPE)
		_offMode = true;
	return ;
}

bool		GraphicalMode::run(void) {

	// int		tick;

	while (!_quit && !_offMode)
	{
		// tick = SDL_GetTicks();
		while (SDL_PollEvent(&this->_event))
		{
			if (this->_event.type == SDL_KEYDOWN)
				keyPressed();
		}
		if (this->_event.type == SDL_QUIT)
			_offMode = true;
		if (!_quit && !_offMode)
			_releaseInfoToScreen();
		// if (1000 / FPS > SDL_GetTicks() - tick)
		// 	SDL_Delay(1000 / FPS - (SDL_GetTicks() - tick));
	}
	return _quit ? _quit : false;
}

void	GraphicalMode::_drawTimeTable(void) {

	int	from_y = MODULS_HPLANE - SIZEH_LMODULE + BORDER * 2;
	int	to_x = SIZEW_LMODULE - BORDER;

	_add_text(this->_modules[2]->getName1().c_str(), to_x / 2, from_y + SIZE_TEXT + BORDER);
	_add_text(this->_modules[2]->getName2().c_str(), to_x / 2, from_y + SIZE_TEXT * 4 + BORDER);
	_add_text(this->_modules[2]->getName3().c_str(), to_x / 2, from_y + SIZE_TEXT * 7 + BORDER);
}

void	GraphicalMode::_preperingInfoCPU(void)
{
	for (int core = 0; core < 4; ++core)
	{
		for (int i = CPU_TIME; i > 0; --i)
		{
			_cores[core].points[i] = _cores[core].points[i - 1];
		}
	}

	std::vector<float> cpu_ticks = this->_modules[3]->getAmount2();
	std::string	s;
	for (int core = 0; core < 4; ++core) {
		_cores[core].points[0] = cpu_ticks.at(core) * 1.6f;
		s = number_to_string(cpu_ticks.at(core)).substr(0, 4) + " %";
		_add_text(s.c_str(), _cores[core].x + _cores[core].w / 2 + BORDER * 8, _cores[core].y - SIZE_TEXT * 2);
	}
}

void	GraphicalMode::_drawCPUtable(void) {

	_add_text(this->_modules[3]->getName2().c_str(), SIZEW_CMODULE, BORDER + SIZE_TEXT * 7 + BORDER);

	_preperingInfoCPU();
	if (SDL_SetRenderDrawColor(this->_rend, 0, 0xFF, 0, 0) < 0)
		throw std::logic_error(SDL_GetError());
	for (int core = 0; core < 4; ++core)
	{
		for (int i = 0; i < CPU_TIME; ++i)
		{
			if (_cores[core].points[i] != 0.0f || _cores[core].points[i + 1] != 0.0f)
			{
				if (SDL_RenderDrawLine(this->_rend, _cores[core].x + i * _cores[core].step_x,
					_cores[core].y + _cores[core].h - _cores[core].points[i],
					_cores[core].x + (i + 1) * _cores[core].step_x,
					_cores[core].y + _cores[core].h - _cores[core].points[i + 1]) < 0)
					throw std::logic_error(SDL_GetError());
			}
		}
	}
	if (SDL_SetRenderDrawColor(this->_rend, 0, 0, 0, 0) < 0)
		throw std::logic_error(SDL_GetError());
}

void	GraphicalMode::_drawRAMtable(void) {

	int	from_x = SIZEW_LMODULE + SIZEW_CMODULE;
	int	to_x = WIDTH - BORDER;
	int	centr = from_x - (from_x - to_x) / 2;

	_add_text(this->_modules[4]->getName2().c_str(), centr, BORDER + SIZE_TEXT * 7 + BORDER);
	_add_text(this->_modules[4]->getName3().c_str(), centr, BORDER + SIZE_TEXT * 11 + BORDER);
}

void	GraphicalMode::_drawNetworkTable(void) {

	int	from_x = SIZEW_LMODULE + SIZEW_CMODULE;
	int	to_x = WIDTH - BORDER;
	int	centr = from_x - (from_x - to_x) / 2;

	_add_text(this->_modules[5]->getName1().c_str(), centr, SIZEH_RMODULE + SIZE_TEXT * 6 + BORDER);
	_add_text(this->_modules[5]->getName2().c_str(), centr, SIZEH_RMODULE + SIZE_TEXT * 10 + BORDER);
}

void	GraphicalMode::_releaseInfoToScreen(void) {

	SDL_RenderClear(this->_rend);
	if (SDL_RenderCopy(this->_rend, this->_background, NULL, NULL) < 0)
		throw std::logic_error(SDL_GetError());
	_drawTimeTable();
	_drawCPUtable();
	_drawRAMtable();
	_drawNetworkTable();
	_drawCat();
	displayInfo();
	SDL_RenderPresent(this->_rend);
}

void	GraphicalMode::_drawCat(void) {

	static int	move = 0;
	SDL_Rect	dst_rect;


	dst_rect.x = 0;
	dst_rect.y = HEIGHT - 50;
	dst_rect.h = 50;
	dst_rect.w = WIDTH;
	if (SDL_RenderCopy(this->_rend, this->_grass, NULL, &dst_rect) < 0)
		throw std::logic_error(SDL_GetError());

	dst_rect.x = -300 + (50 * move);
	dst_rect.y = 800;
	dst_rect.h = 200;
	dst_rect.w = 300;
	if (move >= 32){
		move = 0;
	}
	if (SDL_RenderCopy(this->_rend, this->_cat[move % 8], NULL, &dst_rect) < 0)
		throw std::logic_error(SDL_GetError());

	++move;
}
