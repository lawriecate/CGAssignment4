//
//  train.hpp
//  Assignment4
//
//  Created by Lawrie Cate on 04/09/2016.
//  Copyright © 2016 CarlaAndLawrie. All rights reserved.
//

#ifndef train_hpp
#define train_hpp

#include <stdio.h>

#endif /* train_hpp */
#pragma once
#include <GLUT/glut.h>
#include <OPENGL/glu.h>

#include "wheel.hpp"

class Train
{
public:
    float x,y,z;
    Train(void);
    ~Train( void );
    
    void draw( void );
    
    void choochoo();
private:
    Wheel* wheel1;
    Wheel* wheel2;
    Wheel* wheel3;
    Wheel* wheel4;
    Wheel* wheel5;
    Wheel* wheel6;
    Wheel* wheel7;
    Wheel* wheel8;
    Wheel* wheel9;
    Wheel* wheel10;
};
