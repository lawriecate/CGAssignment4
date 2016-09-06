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
    y = -0.8f;
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
    glutSolidCube(0.5);
    glPopMatrix();
    
    glPushMatrix();
    
    glTranslatef(x+0.25,y, z);
    glRotatef(225,0.0, 1.0, 0.0);
    glScalef(0.45,0.45, 1);
    
    glutSolidTetrahedron();
    glTranslatef(x+2,0,0);
    turbine->draw();
    glPopMatrix();
    
}

void Boat::move(void)
{
    x+=0.005f;
    if(x >= 3.0f) {
        x = -3.0f;
    }
    turbine->spin();
   // y+=0;
}