#ifndef DISPLAY_H
#define DISPLAY_H

#include<SDL2/SDL.h>
#include<iostream>
#include <string>

class Display
{
    public:
        Display(int width,int height,const std::string & title);
        void Clear(float r,float g, float b,float a);
        virtual ~Display();
        void Update();
        bool IsClosed();

    protected:

    private:
    SDL_Window * m_window;
    SDL_GLContext m_glContex;
    bool m_isClosed;
};

#endif // DISPLAY_H
