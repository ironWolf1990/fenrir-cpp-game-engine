#ifndef __SHADER_H__
#define __SHADER_H__

#include <iostream>
#include <fstream>
#include <string>
#include <GL/glew.h>

class Shader
{
public:
    Shader(const std::string &fileName);

    void Bind();

    virtual ~Shader();

protected:
private:
    static const unsigned int NUM_SHADERS = 2;
    Shader(const Shader &other) {}
    void operator=(const Shader &other) {}

    GLuint m_program;
    GLuint m_shaders[NUM_SHADERS];
};

#endif // __SHADER_H__