#ifndef Shaders_hpp
#define Shaders_hpp

//GLEW
#define GLEW_STATIC
#include <GL/glew.h>

//GLFW
#include <GLFW/glfw3.h>


class Shaders
{
public:
    Shaders( const GLchar *vertexPath, const GLchar *fragmentPath );
    
    void Get_Program();
private:
  GLuint Program;    // Constructor generates the shader on the fly
};

#endif /* Shaders_hpp */
