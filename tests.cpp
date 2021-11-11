#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include <iostream>
#include "coord3d.h"
#include "funcs.h"

TEST_CASE("Part A") {
    Coord3D pointP = {10, 20, 30};
    CHECK(length(&pointP) == doctest::Approx(37.4166).epsilon(0.05)); //37.4166

    pointP = {31, 45, 62};
    CHECK(length(&pointP) == doctest::Approx(82.6438).epsilon(0.05)); //82.6438

    pointP = {26, 103, 12};
    CHECK(length(&pointP) == doctest::Approx(106.9065).epsilon(0.05)); //106.9065
}

TEST_CASE("PART B") {
    Coord3D pointA = {30, 20, 10};
    Coord3D pointB = {10, 20, 30};
    CHECK(fartherFromOrigin(&pointA, &pointB) == &pointB);

    pointA = {31, 73, 48};
    pointB = {57, 89, 65};
    CHECK(fartherFromOrigin(&pointA, &pointB) == &pointB);

    pointA = {213, 45, 91};
    pointB = {196, 32, 60};
    CHECK(fartherFromOrigin(&pointA, &pointB) == &pointA);
}

TEST_CASE("PART C") {
    Coord3D pos = {0, 0, 100.0};
    Coord3D vel = {1, 5, 0.2};
    move(&pos, &vel, 2.0);
    CHECK(pos.x == 2);
    CHECK(pos.y == 10);
    CHECK(pos.z == doctest::Approx(100.4).epsilon(0.05));

    pos = {21, 31, 51};
    vel = {3, 9, 6};
    move(&pos, &vel, 12.0);
    CHECK(pos.x == 57);
    CHECK(pos.y == 139);
    CHECK(pos.z == 123);

    pos = {10, 46, 92};
    vel = {2, 4, 8};
    move(&pos, &vel, 8.5);
    CHECK(pos.x == 27);
    CHECK(pos.y == 80);
    CHECK(pos.z == 160);
}

TEST_CASE("PART E") {
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
    CHECK((*ppos).x == 65);
    CHECK((*ppos).y == 6);
    CHECK((*ppos).z == doctest::Approx(107.7).epsilon(0.05));
}

TEST_CASE("Negative Coordinates") {
    Coord3D pointP = {-50, -23, 11};
    CHECK(length(&pointP) == doctest::Approx(56.1249).epsilon(0.05)); //56.1249

    Coord3D pointA = {10, 20, 30};
    Coord3D pointB = {-20, 21, -22};
    CHECK(fartherFromOrigin(&pointA, &pointB) == &pointA);

    Coord3D pos = {0, 0, 100.0};
    Coord3D vel = {1, -5, 0.2};
    move(&pos, &vel, 2.0);
    CHECK(pos.x == 2);
    CHECK(pos.y == -10);
    CHECK(pos.z == doctest::Approx(100.4).epsilon(0.05)); //100.4

}