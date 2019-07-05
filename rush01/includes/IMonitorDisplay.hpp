#ifndef I_MONITOR_DISPLAY_H
# define I_MONITOR_DISPLAY_H

# define N_MODUL 6

class IMonitorDisplay
{
    public:

    	virtual ~IMonitorDisplay(void) {};
        virtual void	displayInfo(void) = 0;

        virtual bool	run(void) = 0;

        virtual void	keyPressed(void) = 0;

    protected:
		IMonitorModule	*_modules[N_MODUL];

};

#endif