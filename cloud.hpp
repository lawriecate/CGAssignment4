//
//  cloud.hpp
//  Assignment4
//
//  Created by Lawrie Cate on 03/09/2016.
//  Copyright © 2016 CarlaAndLawrie. All rights reserved.
//

#ifndef cloud_hpp
#define cloud_hpp

#include <stdio.h>

#endif /* cloud_hpp */
#pragma once
#include <GLUT/glut.h>
#include "Math.h"

class Cloud
{
public:
    
    float size;
    float x;
    float y;
    Cloud(float _x,float _y, float _size);
    ~Cloud( void );
    
    void draw( void );
    void move(void);
private:
    void drawCircle(float _x,float _y, float _size);
};
