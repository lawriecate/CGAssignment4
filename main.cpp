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

Background* background;
int width,height;

void mi_display( void )
{
    glClear( GL_COLOR_BUFFER_BIT );
    
    background->draw();
    
    glutSwapBuffers();
}

void init( void )
{
    
    background = new Background(width,height);
     //glPolygonMode( GL_FRONT_AND_BACK, GL_LINE );
    glShadeModel( GL_SMOOTH );
    /* select clearing color 	*/
    glClearColor( 0.0, 0.0, 0.0, 0.0 );
    
    /* initialize viewing values  */
    glMatrixMode( GL_PROJECTION );
    glLoadIdentity();
    glOrtho( 0.0, 5.0, 0.0, 5.0, -1.0, 1.0 );
}

void mi_idle( void )
{
// object functions eg ball bounce
    
    glutPostRedisplay();
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
    glutInitDisplayMode( GLUT_DOUBLE | GLUT_RGBA );
    width = 800;
    height = 800;
    glutInitWindowSize( width,height);
    glutInitWindowPosition( 100, 100 );
    glutCreateWindow( "OpenGL OOP" );
    init();
   // glutKeyboardFunc( keys );
    glutDisplayFunc( mi_display );
    glutIdleFunc( mi_idle );
    glutMainLoop();
    return 0;   /* ANSI C requires main to return int. */
}
