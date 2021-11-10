#include <iostream>
#include <math.h>
#include "cmath"
#include "coord3d.h"
#include "funcs.h"

double length(Coord3D *p) {
    double length = sqrt(pow((*p).x,2) + pow((*p).y,2) + pow((*p).z,2));
    return round(length * 10000.0)/10000.0;
}

Coord3D* fartherFromOrigin(Coord3D *p1, Coord3D *p2) {
    if(length(p1) > length(p2)) {
        return p1;
    }
    else {
        return p2;
    }
}

void move(Coord3D *ppos, Coord3D *pvel, double dt) {
    (*ppos).x = (*ppos).x + (*pvel).x * dt;
    (*ppos).y = (*ppos).y + (*pvel).y * dt;
    (*ppos).z = (*ppos).z + (*pvel).z * dt;
}

Coord3D* createCoord3D(double x, double y, double z) {
    Coord3D *coordinate = new Coord3D;
    (*coordinate).x = x;
    (*coordinate).y = y;
    (*coordinate).z = z;
    return coordinate;
}

void deleteCoord3D(Coord3D *p) {
    delete p;
}