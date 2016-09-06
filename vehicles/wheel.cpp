//
//  wheel.cpp
//  Assignment4
//
//  Created by Lawrie Cate on 05/09/2016.
//  Copyright © 2016 CarlaAndLawrie. All rights reserved.
//

#include "wheel.hpp"
#include "Math.h"

Wheel::Wheel(float _x,float _y,float _z)
{
    x = _x;
    y = _y;
    z = _z;
    r = 10;
}

Wheel::~Wheel( void )
{
    
}

void Wheel::draw(void)
{
    glPushMatrix();
    glColor3f(0.3,0.3,0.3);
    //glRotatef(90, 0, 1.0f, 0);
    glTranslatef(x,y,z);
    glScalef(0.07, 0.1, 1);
    glBegin(GL_POLYGON);
    glPolygonMode(GL_FRONT_AND_BACK, GL_FILL);
    
    int counter = 0;
    int circleParts = 12;
    for(int i =0; i <= 360; i += 360/circleParts)
    {
        counter++;
        if(counter == 2)
        {
            counter =0;
            i-= 360/circleParts;
            glVertex2f(0, 0);
        }
        
        float rad = 0.017453f * (float)i;
        glVertex2f(cosf(rad), sinf(rad));
        
    }
    
    glEnd();
    glColor3f(0.2,0.2,0.2);
    glTranslatef(0,0,0.01);
    glRotatef(-r, 0,0, 1);
    glBegin(GL_LINES);
    glPolygonMode(GL_FRONT_AND_BACK, GL_LINE);
    
    
    for(int i =0; i <= 360; i += 360/circleParts)
    {
        counter++;
        if(counter == 2)
        {
            counter =0;
            i-= 360/circleParts;
            glVertex2f(0, 0);
        }
        
        float rad = 0.017453f * (float)i;
        glVertex2f(cosf(rad), sinf(rad));
        
    }
    
    glEnd();
    glPopMatrix();
}

void Wheel::spin(void)
{
    r ++;
    if(r==361) {
        r = 0;
    }
}
