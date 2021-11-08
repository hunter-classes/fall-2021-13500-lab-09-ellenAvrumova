#include <iostream>
#include <math.h>
#include "cmath"
#include "coord3d.h"
#include "funcs.h"

double length(Coord3D *p) {
    double length = sqrt(pow((*p).x,2) + pow((*p).y,2) + pow((*p).z,2));
    return length;
}