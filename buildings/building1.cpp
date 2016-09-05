//
//  building1.cpp
//  Assignment4
//
//  Created by Lawrie Cate on 04/09/2016.
//  Copyright © 2016 CarlaAndLawrie. All rights reserved.
//

#include "building1.hpp"
Building1::Building1(float _x, float _y, int _height,int _colour)
{
    x = _x;
    y = _y;
    height = _height;
    colour = _colour;
}

Building1::~Building1( void )
{
}

void Building1::draw( void )
{
    float buildHeight = height * 0.5f;
    switch (colour) {
        case 0:
            glColor3f(1.0f, 0.0f, 0.0f);
            break;
        case 1:
            glColor3f(0.0f, 1.0f, 0.0f);
            break;
        case 2:
            glColor3f(1.0f, 0.0f, 1.0f);
            break;
        case 3:
            glColor3f(1.0f, 1.0f, 0.0f);
            break;
        case 4:
            glColor3f(0.0f, 1.0f, 0.5f);
            break;
            
        default:
            glColor3f(1.0f, 0.0f, 0.0f);
            break;
    }
    
    glBegin(GL_POLYGON);
    glVertex3f(x, y,0.0f);
    glVertex3f(x+width, y,0.0f);
    glVertex3f(x+width, y+buildHeight,0.0f);
    glVertex3f(x, y+buildHeight,0.0f);
    glEnd();
    
    // draw windows
    for(float i = 0.0f;i<height;i++)
    {
        this->drawWindows(i);
    }
    
}

void Building1::drawWindows(float _at_height)
{
    float at_height = _at_height;
    glColor3f(0.8f, 0.8f, 1.0f);
    for(int i = 0;i<=2;i++)
    {
        glBegin(GL_POLYGON);
        glVertex3f(x+(0.1f+(0.3f*i)), y+(0.1f+(0.5f*at_height)),0.1f);
        glVertex3f(x+(0.3f+(0.3f*i)), y+(0.1f+(0.5f*at_height)),0.1f);
        glVertex3f(x+(0.3f+(0.3f*i)), y+(0.4f+(0.5f*at_height)),0.1f);
        glVertex3f(x+(0.1f+(0.3f*i)), y+(0.4f+(0.5f*at_height)),0.1f);
        
        glEnd();
    }
    
}

/*void Building1::drawCircle(float _x,float _y, float _size)
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
            glVertex2f(x, y);
        }
        
        float rad = 0.017453f * (float)i;
        glVertex2f((size*cosf(rad))+x, (size*sinf(rad))+y);
        
    }
    glScalef(size,size,size);
    glEnd();
}
*/