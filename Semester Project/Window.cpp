#include <stdio.h>
#include <iostream>
#include "Window.h"

//GLEW
#define GLEW_STATIC
#include <GL/glew.h>
//GLFW
#include <GLFW/glfw3.h>

int Window::WindowOpen()
{
    glfwInit();
    glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
    glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
    glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);
    glfwWindowHint(GLFW_OPENGL_FORWARD_COMPAT, GL_TRUE);
    glfwWindowHint(GLFW_RESIZABLE, GL_TRUE);
    
    int screenwidth = 0;
    int screenHeight = 0;
    window = glfwCreateWindow(WIDTH, HEIGHT,"Minecrap", nullptr,nullptr);
    glfwGetFramebufferSize(window, &screenwidth, &screenHeight);

    if(nullptr == window)
                    {
         std::cout<<"Failed to create GLFW window"<<std::endl;
         glfwTerminate();
         return -1;
     }
                    glfwMakeContextCurrent(window);
                    glewExperimental=GL_TRUE;
     if(GLEW_OK != glewInit())
     {
         std::cout<<"Failed to initialize GLEW"<<std::endl;
         return -1;
     }
       // Define the viewport dimensions
      glViewport( 0, 0, screenwidth, screenHeight );
    return 0;
}

int Window:: WindowClose()
{
    return 0;
}

GLFWwindow* Window:: WindowAccess()
{
    return window;
}

