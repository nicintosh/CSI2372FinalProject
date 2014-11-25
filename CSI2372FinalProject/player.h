//
//  player.h
//  CSI2372FinalProject
//
//  Created by Nick Burgel on 2014-11-24.
//  Copyright (c) 2014 Nick Burgel & Julien Turcotte. All rights reserved.
//

#ifndef __CSI2372FinalProject__player__
#define __CSI2372FinalProject__player__

#include <stdio.h>
#include <iostream>
#include <string>
using namespace std;

class Player{
    
    string name;
    int gold;
    int ruby;
    int spice;
    int fabric;
    int jewel;
    int cart;
    int food;
    
public:
    Player():gold(5),ruby(0),spice(1), fabric(1), jewel(1), food(10), cart(9){};
    bool canAct() const;
    bool pay(Player& player);
    void eat();
    void print();
    
    void setGold(int value);
    void setRuby(int value);
    void setSpice(int value);
    void setFabric(int value);
    void setJewel(int value);
    void setCart(int value);
    void setFood(int value);
    
    int getGold();
    int getRuby();
    int getSpice();
    int getFabric();
    int getJewel();
    int getCart();
    int getFood();
    int getCartSpace();
    
    
};

#endif /* defined(__CSI2372FinalProject__player__) */
