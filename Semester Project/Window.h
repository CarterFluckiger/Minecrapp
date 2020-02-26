#ifndef Window_h
#define Window_h

//GLEW
#define GLEW_STATIC
#include <GL/glew.h>

//GLFW
#include <GLFW/glfw3.h>


class Window
{
public:
    //Window( );
    //~Window( );
    int WindowOpen( );
    int WindowClose( );
    GLFWwindow* WindowAccess( );
private:
    const int WIDTH = 800, HEIGHT = 600;
    GLFWwindow *window;
};

#endif /* Window_h */
