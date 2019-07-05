#ifndef GRAPHICALMODE_HPP
# define GRAPHICALMODE_HPP

# include <SDL2/SDL.h>
# include <SDL2/SDL_image.h>
# include <SDL2/SDL_ttf.h>
# include <exception>
# include "IMonitorModule.hpp"
# include "IMonitorDisplay.hpp"
# include <sstream>

# define WIDTH 1300
# define HEIGHT 1000
# define BORDER 5
# define COLOR_FROM	0x272822
# define COLOR_TO	0x1c1d19
# define TEXT_R	0x0
# define TEXT_G	0x90
# define TEXT_B	0x0
# define FPS 25
# define SIZE_TEXT 20
# define MODULS_HPLANE (HEIGHT - HEIGHT / 3)
# define SIZEH_LMODULE (MODULS_HPLANE / 3)
# define SIZEH_RMODULE (MODULS_HPLANE / 2)
# define SIZEW_LMODULE (WIDTH / 4)
# define SIZEW_CMODULE (WIDTH / 2)
# define SIZE_LRECT 20
# define CPU_TIME 25

class GraphicalMode : public IMonitorDisplay
{

	public:
		GraphicalMode(void);
		GraphicalMode(IMonitorModule **modules);
		GraphicalMode(GraphicalMode const &);
		GraphicalMode &	operator=(GraphicalMode const &);
		virtual ~GraphicalMode(void);

		bool	run(void);

		void	displayInfo(void);

		void	keyPressed(void);

	private:

		typedef	struct	s_coreinfo
		{
			float		points[CPU_TIME + 1];
			float		x;
			float		y;
			float		w;
			float		h;
			float		step_x;
			float		step_y;
		}				t_coreinfo;

		void		_add_text(const char *text, const int x, const int y);
		SDL_Texture	*_load_texture(const char *file);

		void	_createBackground(void);

		void	_drawRects(const int from_x, const int to_x,
		const int from_y, const int to_y);
		void	_drawRectWithGrid(const float from_x, const float to_x,
		const float from_y, const float to_y, const int n_core);

		void	_leftColumn(void);
		void	_centralColumn(void);
		void	_rightColumn(void);

		void	_drawTimeTable(void);
		void	_drawCPUtable(void);
		void	_preperingInfoCPU(void);
		void	_drawRAMtable(void);
		void	_drawNetworkTable(void);
		void	_drawCat(void);
		void	_releaseInfoToScreen(void);

		SDL_Window		*_win;
		SDL_Renderer	*_rend;
		SDL_Texture		*_background;
		TTF_Font		*_font;
		SDL_Event		_event;
		bool			_quit;
		bool			_offMode;
		IMonitorModule	*_modules[N_MODUL];
		t_coreinfo		_cores[4];
		float			_ratio;
		SDL_Texture		*_cat[8];
		SDL_Texture		*_grass;

};

#endif
