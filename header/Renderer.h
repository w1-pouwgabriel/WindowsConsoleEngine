#ifndef RENDERER_H
#define RENDERER_H

#include "ConsoleEngine.h"
#include "Mesh.h"
#include "Camera.h"

class Renderer : public ConsoleEngine 
{
public:
    Renderer(){};
    ~Renderer(){};

private:
    bool OnUserCreate();
    bool OnUserUpdate(float fElapsedTime);
    Mesh cube;
    Camera cam;
    float fTheta;
};

#endif