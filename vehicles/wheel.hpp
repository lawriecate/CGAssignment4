//
//  wheel.hpp
//  Assignment4
//
//  Created by Lawrie Cate on 05/09/2016.
//  Copyright © 2016 CarlaAndLawrie. All rights reserved.
//

#ifndef wheel_hpp
#define wheel_hpp

#include <stdio.h>

#endif /* wheel_hpp */
#pragma once
#include <GLUT/glut.h>
#include <OPENGL/glu.h>

class Wheel
{
public:
    float x;
    float y;
    float z;
    float r;
    Wheel(float x,float y,float z);
    ~Wheel( void );
    
    void draw( void );
    void spin(void);
    
    void switchstate();
private:
    
};
