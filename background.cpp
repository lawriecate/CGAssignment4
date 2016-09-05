//
//  background.cpp
//  Assignment4
//
//  Created by Lawrie Cate on 03/09/2016.
//  Copyright © 2016 CarlaAndLawrie. All rights reserved.
//

#include "background.hpp"

Background::Background(float _width, float _height)
{
    width = _width;
    height = _height;
    cloud1 = new Cloud(-0.9f,0.8f,0.7f);
    cloud2 = new Cloud(-0.5f,1.2f,1.0f);
    cloud3 = new Cloud(1.0f,1.0f,1.0f);
    building1 = new Building1(-2.0f,-1.0f,2,0);
    building2 = new Building1(-1.0f,-1.0f,4,1);
    building3 = new Building1(-0.0f,-1.0f,3,2);
    building4 = new Building1(1.0f,-1.0f,6,3);
    building5 = new Building1(2.0f,-1.0f,4,4);
}

Background::~Background( void )
{
}

void Background::draw(  )
{
    // sky
    glColor3f( 0.3f, 0.3f, 0.9f );
    glBegin(GL_POLYGON);
    glVertex3f(-5.0f,-5.0f,-1.0f);
    glVertex3f(5.0f,-5.0f,-1.0f);
    glVertex3f(5.0f,5.0f,-1.0f);
    glVertex3f(-5.0f,5.0f,-1.0f);
    glEnd();
    
    glColor3f( 1.0f, 1.0f, 1.0f );
    glLineWidth( 3.0f );
    
    glBegin( GL_POLYGON ); //Arriba
    // mountain
    glVertex3f(-5.0f, 0.0f,1.0f);
    glVertex3f(-4.5f, 0.0f,1.0f);
    glVertex3f(-4.75f, 0.5f,1.0f);
    glEnd();
    
    cloud1->draw();
    cloud2->draw();
    cloud3->draw();
    building1->draw();
    building2->draw();
    building3->draw();
    building4->draw();
    building5->draw();
    
    
    glLineWidth( 1.0f );
}
