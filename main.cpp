#include <iostream>
#include "coord3d.h"
#include "funcs.h"

int main() {
  std::cout << "*****PART A*****" << std::endl;

  Coord3D pointP = {10, 20, 30};
  std::cout << length(&pointP) << std::endl;
  //Prints out: 37.4166

  std::cout << "*****PART B*****" << std::endl;

  Coord3D pointA = {10, 20, 30};
  Coord3D pointB = {-20, 21, -22};
  std::cout << "Address of A: " << &pointA << std::endl;
  //Prints out: Address of A: 0x7ffeec491828
  std::cout << "Address of B: " << &pointB << std::endl << std::endl;
  //Prints out: Address of B: 0x7ffeec491810
  Coord3D* ans = fartherFromOrigin(&pointA, &pointB);
   
  std::cout << "ans = " << ans << std::endl;
  //Prints out: ans = 0x7ffeec491828

  std::cout << "*****PART C*****" << std::endl;

  Coord3D pos = {0, 0, 100.0};
  Coord3D vel = {1, -5, 0.2};
  move(&pos, &vel, 2.0);
  std::cout << pos.x << " " << pos.y << " " << pos.z << std::endl; // prints: 2 -10 100.4
  //Prints out: 2 -10 100.4

  std::cout << "*****PART E*****" << std::endl;

  double x, y, z;

  x = 10;
  y = 20;
  z = 30;
  Coord3D *ppos = createCoord3D(x,y,z);

  x = 5.5;
  y = -1.4;
  z = 7.77;
  Coord3D *pvel = createCoord3D(x,y,z);
  
  move(ppos, pvel, 10.0);

  std::cout << "Coordinates after 10 seconds: " << (*ppos).x << " " << (*ppos).y << " " << (*ppos).z << std::endl;
  //Prints out: Coordinates after 10 seconds: 65 6 107.7
  deleteCoord3D(ppos);
  deleteCoord3D(pvel);
  return 0;
}
