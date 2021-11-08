#include <iostream>
#include "coord3d.h"
#include "funcs.h"

int main() {
  Coord3D pointP = {10, 20, 30};
    std::cout << length(&pointP) << std::endl;

  return 0;
}
