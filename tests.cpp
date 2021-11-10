#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include <iostream>
#include "coord3d.h"
#include "funcs.h"

TEST_CASE("Part A") {
    Coord3D pointP = {10, 20, 30};
    CHECK(length(&pointP) == 37.4166);
    pointP = {31, 45, 62};
    CHECK(length(&pointP) == 82.6438);
    pointP = {26, 103, 12};
    CHECK(length(&pointP) == 106.9065);
}

TEST_CASE("PART B") {
    Coord3D pointA = {10, 20, 30};
    Coord3D pointB = {-20, 21, -22};
    CHECK(fartherFromOrigin(&pointA, &pointB) == &pointA);
    pointA = {31, 73, 48};
    pointB = {57, 89, 65};
    CHECK(fartherFromOrigin(&pointA, &pointB) == &pointB);
    pointA = {213, 45, 91};
    pointB = {196, 32, 60};
    CHECK(fartherFromOrigin(&pointA, &pointB) == &pointA);
}

TEST_CASE("PART C") {
    
}

TEST_CASE("PART E") {
    
}