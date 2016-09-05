//
//  train.cpp
//  Assignment4
//
//  Created by Lawrie Cate on 04/09/2016.
//  Copyright © 2016 CarlaAndLawrie. All rights reserved.
//

#include "train.hpp"

Train::Train(void)
{
    x = -3.0f;
    
}

Train::~Train( void )
{
}

void Train::draw( void )
{
    glColor3f(0.2f, 0.2f, 0.2f);
    
    
//    glBegin(GL_POLYGON);
    /*//front
    glVertex3f(0.0f,0.0f,0.0f);
    glVertex3f(1.0f,0.0f,0.0f);
    glVertex3f(1.0f,1.0f,0.0f);
    glVertex3f(0.0f,1.0f,0.0f);
    //back
    glVertex3f(0.0f,0.0f,1.0f);
    glVertex3f(1.0f,0.0f,1.0f);
    glVertex3f(1.0f,1.0f,1.0f);
    glVertex3f(0.0f,1.0f,1.0f);
    // right
    glVertex3f(1.0f,0.0f,0.0f);
    glVertex3f(1.0f,0.0f,1.0f);
    glVertex3f(1.0f,1.0f,0.0f);
    glVertex3f(1.0f,1.0f,1.0f);
    // left
    glVertex3f(0.0f,0.0f,0.0f);
    glVertex3f(0.0f,0.0f,1.0f);
    glVertex3f(0.0f,1.0f,0.0f);
    glVertex3f(0.0f,1.0f,1.0f);
    // top
    glVertex3f(0.0f, 1.0f, 0.0f);
    glVertex3f(1.0f, 1.0f, 0.0f);
    glVertex3f(0.0f, 1.0f, 1.0f);
    glVertex3f(1.0f, 1.0f, 1.0f);
    // bottom
    glVertex3f(0.0f, 0.0f, 0.0f);
    glVertex3f(1.0f, 0.0f, 0.0f);
    glVertex3f(1.0f, 0.0f, 1.0f);
    glVertex3f(0.0f, 0.0f, 1.0f);
     glEnd();

     */
    //glLoadIdentity();
    GLUquadricObj *p = gluNewQuadric();
    gluQuadricDrawStyle(p, GLU_LINE);
    glScalef(0.5f, 0.1f, 1.0f);
    glTranslatef(x, -5.0f, 2.0f);
    glRotatef(90.0f, 0.0f, 1.0f, 0.0f);
    
    gluCylinder(p, 1.0f, 1.0f, 1.0f, 20, 20);
    
    
    
    
}

void Train::choochoo()
{
    x = x + 0.01f;
}
