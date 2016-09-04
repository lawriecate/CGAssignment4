//
//  building1.hpp
//  Assignment4
//
//  Created by Lawrie Cate on 04/09/2016.
//  Copyright © 2016 CarlaAndLawrie. All rights reserved.
//

#ifndef building1_hpp
#define building1_hpp

#include <stdio.h>

#endif /* building1_hpp */
#pragma once
#include <GLUT/glut.h>

class Building1
{
public:
    
    float x;
    float y;
    int height;
    int colour;
    const int width = 1;
    Building1(float _x,float _y,int height,int colour);
    ~Building1( void );
    
    void draw( void );
private:
    void drawWindows(float at_height);
};
