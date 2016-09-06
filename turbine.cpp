//
//  turbine.cpp
//  CGAssignment4.1
//
//  Created by Carla Flores on 05/09/16.
//  Copyright © 2016 Carla Flores. All rights reserved.
//

#include "turbine.hpp"
Turbine::Turbine()
{
    r=0;
}
Turbine::~Turbine( void )
{
}
void Turbine::draw( void )
{
    glPushMatrix();
    // STORE state.
    //glTranslatef(-5.0f, -0.1f, 0);
    glColor3f(0.0f,0.0f, 0.0f);
    glRotated(r,0.0,1.0, 1.0);
    glScalef(0.4,0.4,0.4);
    glutSolidTetrahedron();
    glPopMatrix();
    
}
void Turbine::spin(void)
{
    r+=30;
    if(r==361)
    {
        r=0;
    }
}