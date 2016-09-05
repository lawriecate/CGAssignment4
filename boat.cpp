//
//  boat.cpp
//  CGAssignment4.1
//
//  Created by Carla Flores on 05/09/16.
//  Copyright © 2016 Carla Flores. All rights reserved.
//

#include "boat.hpp"

Turbine* turbine;
Boat::Boat(float _x, float _y)
{
    x = _x;
    y = _y;
    turbine=new Turbine(y);
}

Boat::~Boat( void )
{
}

void Boat::draw( void )
{
    glPushMatrix();
    // STORE state.
    glColor3f(0.41f,0.30f, 0.22f);
    glTranslatef(0.01f+x,0.15f, 0.0f);
    glutSolidCube(0.5);
    glTranslatef(0.25,0.0, 1.0);
    glRotatef(225,0.0, 1.0, 0.0);
    glScalef(0.45,0.45, 0.45);
    glutSolidTetrahedron();
    turbine->draw();
    glPopMatrix();
    
}