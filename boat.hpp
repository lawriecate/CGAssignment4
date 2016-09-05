//
//  boat.hpp
//  CGAssignment4.1
//
//  Created by Carla Flores on 05/09/16.
//  Copyright © 2016 Carla Flores. All rights reserved.
//

#ifndef boat_hpp
#define boat_hpp
#include "turbine.hpp"
#include <stdio.h>
#pragma once
#include <GLUT/glut.h>
class Boat
{
public:
    
    float x;
    float y;
    const int width = 1;
    Boat(float _x,float _y);
    ~Boat( void );
    void draw( void );
};
#endif /* boat_hpp */
