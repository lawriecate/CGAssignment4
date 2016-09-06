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
    x = -2.0f;
    y = -0.5f;
    z = 1.75;

    wheel1 = new Wheel(x,y-0.2,z+0.2);
    wheel2 = new Wheel(x,y-0.2,z+0.2);
    wheel3 = new Wheel(x,y-0.2,z+0.2);
    wheel4 = new Wheel(x,y-0.2,z+0.2);
    wheel5 = new Wheel(x,y-0.2,z+0.2);
    
    wheel6 = new Wheel(x,y-0.2,z-0.2);
    wheel7 = new Wheel(x,y-0.2,z-0.2);
    wheel8 = new Wheel(x,y-0.2,z-0.2);
    wheel9 = new Wheel(x,y-0.2,z-0.2);
    wheel10 = new Wheel(x,y-0.2,z-0.2);
    
}

Train::~Train( void )
{
}

void Train::draw( void )
{
    
    //glLoadIdentity();
    /*glPushMatrix();
        glColor3f(0.2f, 0.2f, 0.2f);
    GLUquadricObj *p = gluNewQuadric();
    gluQuadricDrawStyle(p, GLU_LINE);
    //glScalef(0.3,0.3,1);
    glTranslatef(x, y,z);
    glRotatef(90.0f, 0.0f, 1.0f, 0.0f);
    
    gluCylinder(p, 1.0f, 1.0f, 1.0f, 20, 20);
    glPopMatrix();*/
    
    glPushMatrix();
    glColor3f(0.2f, 0.2f, 0.2f);
    //glRotatef(90, 0, 1.0f, 0);
    //glTranslatef(x,y,z);
    glTranslatef(x, y, z);
    glutSolidCube(0.3f);
    glPopMatrix();
    
    glPushMatrix();
    glColor3f(0.8f, 0.2f, 0.2f);
    //glRotatef(90, 0, 1.0f, 0);
   // glTranslatef(x+0.3, y-0.05, z);
    //glScalef(3.0, 1, 1);


    GLUquadricObj *p = gluNewQuadric();
    //gluQuadricDrawStyle(p, GLU_LINE);
    glTranslatef(x, y-0.02,z);
    
    glRotatef(90.0f, 0.0f, 1.0f, 0.0f);
   glScalef(0.13,0.13,1);
    gluCylinder(p, 1.0f, 1.0f, 0.5f, 20, 20);
   
    //glutSolidCube(0.2f);
    glPopMatrix();
    
    wheel1->draw();
    wheel2->draw();
    wheel3->draw();
    wheel4->draw();
    wheel5->draw();
    wheel6->draw();
    wheel7->draw();
    wheel8->draw();
    wheel9->draw();
    wheel10->draw();
    
    
}

void Train::choochoo()
{
    x = x + 0.005f;
    if(x >= 3.0f) {
        x = -3.0f;
    }
    wheel1->x = x-0.06;
    wheel2->x = x+0.08;
    wheel3->x = x+0.22;
    wheel4->x = x+0.34;
    wheel5->x = x+0.46;
    
    wheel1->spin();
    wheel2->spin();
    wheel3->spin();
    wheel4->spin();
    wheel5->spin();
    
    wheel6->x = x-0.06;
    wheel7->x = x+0.08;
    wheel8->x = x+0.22;
    wheel9->x = x+0.34;
    wheel10->x = x+0.46;
    
    wheel6->spin();
    wheel7->spin();
    wheel8->spin();
    wheel9->spin();
    wheel10->spin();
}
