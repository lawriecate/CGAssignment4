//
//  boat.cpp
//  CGAssignment4.1
//
//  Created by Carla Flores on 05/09/16.
//  Copyright © 2016 Carla Flores. All rights reserved.
//

#include "boat.hpp"

Turbine* turbine;
Boat::Boat( void)
{
    x = -3.0f;
    y = -0.9f;
    z = 2.0f;
    turbine=new Turbine();
}

Boat::~Boat( void )
{
}

void Boat::draw( void )
{
    glColor3f(0.41f,0.30f, 0.22f);
    glPushMatrix();
    // STORE state.
    glTranslatef(x,y,z);
    glScalef(0.4,0.2,0.3);
    glutSolidCube(1);
    glTranslatef(0.65,0.25,0.1);
    glRotatef(45,1.0,0.0,1.0);
    glScalef(1,0.9,0.9);
    glutSolidTetrahedron();
    glTranslatef(-1.3,0.0,0.0);
    turbine->draw();
    glPopMatrix();
    
}

void Boat::move(void)
{
    x+=0.01f;
    if(x >= 3.0f) {
        x = -3.0f;
    }
    turbine->spin();
   // y+=0;
}