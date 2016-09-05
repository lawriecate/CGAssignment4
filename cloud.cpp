//
//  cloud.cpp
//  Assignment4
//
//  Created by Lawrie Cate on 03/09/2016.
//  Copyright © 2016 CarlaAndLawrie. All rights reserved.
//


#include "cloud.hpp"

Cloud::Cloud(float _x, float _y, float _size)
{
    x = _x;
    y = _y;
    size = _size;
}

Cloud::~Cloud( void )
{
}

void Cloud::draw( void )
{
    glColor3f(1.0f, 1.0f, 1.0f);
    this->drawCircle((x+0.2f),y,0.3f);
    this->drawCircle((x+0.5f),y,0.3f);
    this->drawCircle((x+0.35f),(y+0.25f),0.25f);
}

void Cloud::drawCircle(float _x,float _y, float _size)
{
    float x,y,size;
    x=_x;
    y=_y;
    size = _size;
    GLint circleParts = 50;
    // draws circle with given number of points
    glBegin(GL_POLYGON);
    
    int counter = 0;
    for(int i =0; i <= 360; i += 360/circleParts)
    {
        counter++;
        if(counter == 2)
        {
            counter =0;
            i-= 360/circleParts;
            glVertex3f(x, y,-0.5f);
        }
        
        float rad = 0.017453f * (float)i;
        glVertex3f((size*cosf(rad))+x, (size*sinf(rad))+y,-0.5f);
        
    }
    glScalef(size,size,size);
    glEnd();
}
