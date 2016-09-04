//
//  background.hpp
//  Assignment4
//
//  Created by Lawrie Cate on 03/09/2016.
//  Copyright © 2016 CarlaAndLawrie. All rights reserved.
//

#ifndef background_hpp
#define background_hpp

#endif /* background_hpp */
#include "cloud.hpp"
#include "building1.hpp"

#pragma once
#include <GLUT/glut.h>

class Background
{
public:
    
    float width;
    float height;
    Cloud* cloud1;
    Cloud* cloud2;
    Cloud* cloud3;
    Building1* building1;
    Building1* building2;
    Building1* building3;
    Building1* building4;
    Building1* building5;
    Background(float _width,float _height);
    ~Background( void );
    
    void draw( void );

};
