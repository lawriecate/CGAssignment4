//
//  turbine.hpp
//  CGAssignment4.1
//
//  Created by Carla Flores on 05/09/16.
//  Copyright © 2016 Carla Flores. All rights reserved.
//

#ifndef turbine_hpp
#define turbine_hpp

#include <stdio.h>

#endif /* turbine_hpp */

#include <stdio.h>
#pragma once
#include <GLUT/glut.h>
class Turbine
{
public:
    
    float x;
    const int width = 1;
    Turbine(float _x);
    ~Turbine( void );
    void draw( void );
};