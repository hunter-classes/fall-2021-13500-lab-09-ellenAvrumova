/**
 * Author: Ellen Avrumova
 * Course: CSCI-135
 * Instructor: Tong Yi & Mike Zamansky
 * Assignment: Lab 9D
 * This is the file for part D. It deletes all dynamically allocated memory when it's not needed.
*/

#pragma once
#include "coord3d.h"

double length(Coord3D *p);
Coord3D* fartherFromOrigin(Coord3D *p1, Coord3D *p2);
void move(Coord3D *ppos, Coord3D *pvel, double dt);
Coord3D* createCoord3D(double x, double y, double z);
void deleteCoord3D(Coord3D *p);