#include <iostream>
#include "coord3d.h"
#include "funcs.h"

int main() {
  std::cout << "***PART A***" << std::endl;
  Coord3D pointP = {10, 20, 30};
  std::cout << length(&pointP) << std::endl;

  std::cout << "***PART B***" << std::endl;
  Coord3D pointA = {10, 20, 30};
  Coord3D pointB = {-20, 21, -22};
  std::cout << "Address of A: " << &pointA << std::endl;
  std::cout << "Address of B: " << &pointB << std::endl << std::endl;

  Coord3D* ans = fartherFromOrigin(&pointA, &pointB);
   
  std::cout << "ans = " << ans << std::endl;

  std::cout << "***PART C***" << std::endl;
  Coord3D pos = {0, 0, 100.0};
  Coord3D vel = {1, -5, 0.2};
  move(&pos, &vel, 2.0); // object pos gets changed
  std::cout << pos.x << " " << pos.y << " " << pos.z << std::endl; // prints: 2 -10 100.4
  
  return 0;
}
