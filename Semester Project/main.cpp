#include <iostream>

//GLEW
#define GLEW_STATIC
#include <GL/glew.h>

//GLFW
#include <GLFW/glfw3.h>

#include "Window.h"
#include "Shaders.h"


int main()
{
    Window Window;
    Window.WindowOpen();
    Shaders Shaders( "core.vs", "core.frag" );
    
    
        // Build and compile our shader program

    
    
    
    GLfloat vertices[]=
    {
        -0.5f,-0.5f, 0.0f,//bottom left
        0.5f,-0.5f,0.0f,
        0.0f, 0.5f,0.0f
    };
                    GLuint VBO, VAO;
                    glGenVertexArrays(1,&VAO);
                    glGenBuffers(1, &VBO);
                    glBindVertexArray(VAO);
                    glBindBuffer(GL_ARRAY_BUFFER,VBO);
                    glBufferData(GL_ARRAY_BUFFER,sizeof(vertices),vertices,GL_STATIC_DRAW);
                
                    glVertexAttribPointer(0,3,GL_FLOAT,GL_FALSE,3*sizeof(GLfloat),(GLvoid*)0);
    
                    glEnableVertexAttribArray(0);
                    
                    glBindBuffer(GL_ARRAY_BUFFER,0);
                    
                    glBindVertexArray(0);
                    
                    
                    
                    
                    
    
    
    
    while(!glfwWindowShouldClose(Window.WindowAccess()))
    {
        glfwPollEvents();
        glClearColor(0.2f, 0.3f,0.3f, 1.0f);
        glClear(GL_COLOR_BUFFER_BIT);
        
        
        
        Shaders.Get_Program();
        glBindVertexArray(VAO);
        glDrawArrays(GL_TRIANGLES,0,3);
        glBindVertexArray(0);
        
        glfwSwapBuffers(Window.WindowAccess());
    
    }
                glDeleteVertexArrays(1,&VAO);
                    glDeleteBuffers(1, &VBO);
                   glfwTerminate();
                   return 0;
}
