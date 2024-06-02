#include "BrickWall.hpp"

    BrickWall::BrickWall()
    {
        type = "Inconspicuous Red-brick Wall";
    }
    BrickWall::~BrickWall(){}
    BrickWall* BrickWall::clone()
    {
        return new BrickWall();
    }