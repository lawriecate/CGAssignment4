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
    float z;
    const int width = 1;
    Boat(void);
    ~Boat( void );
    void draw( void );
    void move( void );
};
#endif /* boat_hpp */
