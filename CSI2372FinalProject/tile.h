//
//  tile.h
//  CSI2372FinalProject
//
//  Created by Nick Burgel on 2014-11-24.
//  Copyright (c) 2014 Nick Burgel & Julien Turcotte. All rights reserved.
//

#ifndef __CSI2372FinalProject__tile__
#define __CSI2372FinalProject__tile__

#include <stdio.h>
#include <iostream>
#include "player.h"

class Tile{

public:
    
    bool operator==(const Tile &t);
    virtual bool action( Player& player );
    virtual Tile* clone();
    //ostream& operator<<;

};

class Desert: public Tile{
    
public:
    
    bool action(Player& player);
    Tile* clone();

};

class Restaurant: public Tile{

public:
    
    bool action(Player& player);
    Tile* clone();

};

class Smerchant: public Tile{

public:
    
    bool action(Player& player);
    Tile* clone();

};

class Fmanu: public Tile{

public:
    
    bool action(Player& player);
    Tile* clone();

};

class Jeweler: public Tile{

public:
    
    bool action(Player& player);
    Tile* clone();

};

class CartM: public Tile{

public:
    
    bool action(Player& player);
    Tile* clone();

};

class Smarket: public Tile{

public:
    
    bool action(Player& player);
    Tile* clone();

};

class SPmarket: public Tile{

public:
    
    bool action(Player& player);
    Tile* clone();

};

class Jmarket: public Tile{
    
public:
    
    bool action(Player& player);
    Tile* clone();
    

};

class Fmarket: public Tile{

public:
    
    bool action(Player& player);
    Tile* clone();

};

class Bmarket: public Tile{

public:
    
    bool action(Player& player);
    Tile* clone();

};

class Casino: public Tile{

public:
    
    bool action(Player& player);
    Tile* clone();

};

class Gmerch: public Tile{

public:
    
    bool action(Player& player);
    Tile* clone();

};

class Palace: public Tile{

public:
    
    bool action(Player& player);
    Tile* clone();

};

#endif /* defined(__CSI2372FinalProject__tile__) */
