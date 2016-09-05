//
//  turbine.cpp
//  CGAssignment4.1
//
//  Created by Carla Flores on 05/09/16.
//  Copyright © 2016 Carla Flores. All rights reserved.
//

#include "turbine.hpp"
Turbine::Turbine(float _x)
{
    x = _x;
}
Turbine::~Turbine( void )
{
}
void Turbine::draw( void )
{
    glPushMatrix();
    // STORE state.
    glTranslatef(-2.0f, -0.1f, -0.0f);
    glColor3f(0.0f,0.0f, 0.0f);
    glRotated(x, 0.0, 0.0, 0.0);
    glScalef(0.3,0.3, 0.3);
    glutSolidTetrahedron();
    glPopMatrix();
    
}