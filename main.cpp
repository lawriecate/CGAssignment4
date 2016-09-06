//
//  main.cpp
//  Assignment4
//
//  Created by Lawrie Cate on 03/09/2016.
//  Copyright © 2016 CarlaAndLawrie. All rights reserved.
//

/*
 * Sergio Ruiz.
 *
 * TC3022. Computer Graphics Course.
 * Basic template OpenGL project.
 */

#ifdef __APPLE__
#include <OpenGL/gl.h>
#include <OpenGL/glu.h>
#include <GLUT/glut.h>
#elif defined WIN32
#include "glew.h"
#include "freeglut.h"
#endif

#include <stdio.h>

#include "background.hpp"
#include "train.hpp"
#include "boat.hpp"

Background* background;
Train* train;
Boat* boat;
int width,height;

void display( void )
{
    
    glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
    glLoadIdentity();
    gluLookAt(0.0, 0.0, 5.0,										// Where the camera is.
              0.0, 0.0, 0.0,										// To where the camera points at.
              0.0, 1.0, 0.0);
   // glPushMatrix();
    glColor3f(1.0f, 0.0f, 0.0f);
    //glutWireCube(1.0f);
    background->draw();
    
    
    boat->draw();
    train->draw();

    
    //glPopMatrix();
    
    glutSwapBuffers();
}

void init()
{
    background = new Background(width,height);
    train = new Train();
    boat=new Boat();
    
    //boat=new Boat(boat_x,boat_y);
    glPolygonMode( GL_FRONT_AND_BACK, GL_FILL );
    glShadeModel( GL_SMOOTH );
    glEnable(GL_DEPTH_TEST);
    /* select clearing color 	*/
    glClearColor( 0.0, 0.0, 0.0, 0.0 );
    
    /* initialize viewing values  */
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
    //glOrtho( 0.0, 5.0, 0.0, 5.0, -1.0, 1.0 );
}


void idle( void )
{
// object functions eg ball bounce
    
    train->choochoo();
    boat->move();
    background->update();
    glutPostRedisplay();
}

void reshape(int x, int y)											// Called when the window geometry changes.
{
    glMatrixMode(GL_PROJECTION);									// Go to 2D mode.
    glLoadIdentity();												// Reset the 2D matrix.
    gluPerspective(40.0, (GLdouble)x / (GLdouble)y, 0.5, 20.0);		// Configure the camera lens aperture.
    glMatrixMode(GL_MODELVIEW);										// Go to 3D mode.
    glViewport(0, 0, x, y);											// Configure the camera frame dimensions.
  /*  gluLookAt(0.0, 0.0, 4.0,
              0.0, 0.0, 0.0,
              0.0, 1.0, 0.0);*/
    gluLookAt(2.5, 0.5, 0.4,
              0.0, 1.5, 0.0,
              0.0, 1.0, 0.0);
    display();
}

void keys( unsigned char key, int x, int y )
{
   /* switch( key )
    {
        case 'w':	//Paleta 1 arriba
            pad1->move( 1 );
            break;
        case 's':	//Paleta 1 abajo
            pad1->move( -1 );
            break;
        case 'o':	//Paleta 2 arriba
            pad2->move( 1 );
            break;
        case 'l':	//Paleta 2 abajo
            pad2->move( -1 );
            break;
    }*/
}

int main( int argc, char** argv )
{
    glutInit( &argc, argv );
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_DEPTH | GLUT_RGB);
    width = 800;
    height = 800;
    glutInitWindowSize( width,height);
    //glutInitWindowPosition( 100, 100 );
    glutCreateWindow( "OpenGL OOP" );
    init();
   // glutKeyboardFunc( keys );
    glutReshapeFunc(reshape);
    glutDisplayFunc( display );
    glutIdleFunc( idle );
    glutMainLoop();
    return 0;   /* ANSI C requires main to return int. */
}
