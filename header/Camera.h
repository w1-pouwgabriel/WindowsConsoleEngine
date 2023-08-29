#pragma once

#include "./maths/Mat4x4.h"
#include "./maths/Vector3D.h"

struct Camera
{
    Vector3D pos;
    Mat4x4 projection;
};