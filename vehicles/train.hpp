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

class Train
{
public:
    float x;
    Train(void);
    ~Train( void );
    
    void draw( void );
    
    void choochoo();
private:
 
};
