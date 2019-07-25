#ifndef DISPLAY_H
#define DISPLAY_H

#include<SDL2/SDL.h>
#include<iostream>


class display
{
    public:
        display(int width,int height,const std::string & title);
        virtual ~display();
        void Update();
        bool IsClosed();

    protected:

    private:
    SDL_Window * m_window;
    SDL_GLContext m_glContex;
    bool m_isClosed;
};

#endif // DISPLAY_H
