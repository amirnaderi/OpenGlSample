#include <iostream>
#include <sstream>
#include<GL/glew.h>
#include<SDL2/SDL.h>
#include "Display.h"

using namespace std;

int main()
{

    Display display(800,600,"This_is_Test");
    while(!display.IsClosed())
    {
        display.Clear(0.0f,0.15f,0.3f,0.0f);

        glLineWidth(1.5);
        glColor3f(1.0, 0.0, 0.0);

        glBegin(GL_LINES);
        glVertex3f(0.0, 0.0, 0.0);
        glVertex3f(5, 0, 0);

        glEnd();



        display.Update();


    }
    return 0;
}
