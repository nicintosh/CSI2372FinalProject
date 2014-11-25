//
//  tile.cpp
//  CSI2372FinalProject
//
//  Created by Nick Burgel on 2014-11-24.
//  Copyright (c) 2014 Nick Burgel & Julien Turcotte. All rights reserved.
//

#include "tile.h"


// Action Functions


// A desert tile has no action
bool Desert::action(Player &player) {
    return true;
}

// A resaurant tile gives a player 10 food
bool Restaurant::action(Player &player) {
    player.setFood(10);
    return true;
}

// A spice mercant tile trades 3 spice for 2 gold
bool Smerchant::action(Player &player) {
    
    bool canBuy = false;
    int cartSpace = player.getCartSpace();
    int item = player.getSpice();
    int gold = player.getGold();
    
    if (gold>=2) {
        canBuy = true;
        
        player.setGold(gold-2);
        
        if (cartSpace >= 3) {
            player.setSpice(item+3);
        } else {
            player.setSpice(item+cartSpace);
        }

    }
    
    return canBuy;
}

// A Fabric Manufacture trades 3 fabric for 2 gold
bool Fmanu::action(Player &player) {
    
    bool canBuy = false;
    int cartSpace = player.getCartSpace();
    int item = player.getFabric();
    int gold = player.getGold();
    
    if (gold>=2) {
        canBuy = true;
        
        player.setGold(gold-2);
        
        if (cartSpace >= 3) {
            player.setFabric(item+3);
        } else {
            player.setSpice(item+cartSpace);
        }
        
    }
    
    return canBuy;
}

// A jeweler trades 3 jewlery for 2 gold
bool Jeweler::action(Player &player) {
    
    bool canBuy = false;
    int cartSpace = player.getCartSpace();
    int item = player.getJewel();
    int gold = player.getGold();
    
    if (gold>=2) {
        canBuy = true;
        
        player.setGold(gold-2);
        
        if (cartSpace >= 3) {
            player.setSpice(item+3);
        } else {
            player.setSpice(item+cartSpace);
        }
        
    }
    
    return canBuy;
}

// A cart manufacturare trades 3 cart spaces for 7 gold
bool CartM::action(Player &player) {
    
    bool canBuy = false;
    int cart = player.getCart();
    int gold = player.getGold();
    
    if (gold>=7) {
        canBuy = true;
        
        player.setGold(gold-7);
        player.setCart(cart+3);
    }
    
    return canBuy;
}

// A small market trades 1 spice, 1 jewel and 1 fabric for 8 gold
bool Smarket::action(Player &player) {
    
    bool canSell = false;
    int spice = player.getSpice();
    int jewel = player.getJewel();
    int fabric = player.getFabric();
    int gold = player.getGold();
    
    if ((spice>0)&&(jewel>0)&&(fabric>0)) {
        canSell = true;
        
        player.setGold(gold+8);
        player.setSpice(spice-1);
        player.setJewel(jewel-1);
        player.setFabric(fabric-1);
    }
    
    return canSell;
}

// A spcice market trades 3 spice for 6 gold
bool SPmarket::action(Player &player) {
    
    bool canSell = false;
    int item = player.getSpice();
    int gold = player.getGold();
    
    if (item>=3) {
        canSell = true;
        
        player.setGold(gold+6);
        player.setSpice(item-3);
    }
    
    return canSell;
}

// A jewel market trades 3 jewels for 6 gold
bool Jmarket::action(Player &player) {
    
    bool canSell = false;
    int item = player.getJewel();
    int gold = player.getGold();
    
    if (item>=3) {
        canSell = true;
        
        player.setGold(gold+6);
        player.setJewel(item-3);
    }
    
    return canSell;
}

// A fabric market trades 3 fabric for 6 gold
bool Fmarket::action(Player &player) {
    
    bool canSell = false;
    int item = player.getFabric();
    int gold = player.getGold();
    
    if (item>=3) {
        canSell = true;
        
        player.setGold(gold+6);
        player.setFabric(item-3);
    }
    
    return canSell;
}

// A black market trades 0-5 goods at random for 1 gold
bool Bmarket::action(Player &player) {
    
    bool canBuy = false;
    int gold = player.getGold();
    
    if (gold>=1) {
        canBuy = true;
        player.setGold(gold-1);
        int item;
        
        // Generate a random number between 0 and 4 to determine good recieved
        
        int good = rand() % 5;
        
        // Generate a random number between 0 and 5 to determine number of goods recieved
        
        int numGoods = rand() % 6;
        
        int cartSpace = player.getCartSpace();
        
        if (cartSpace<numGoods) {
            numGoods = cartSpace;
        }
        
        switch (good) {
            case 0:
                item = player.getSpice();
                player.setSpice(item+numGoods);
                break;
                
            case 1:
                item = player.getFabric();
                player.setFabric(item+numGoods);
                break;
                
            case 2:
                item = player.getJewel();
                player.setJewel(item+numGoods);
                break;
                
            case 3:
                item = player.getRuby();
                player.setRuby(item+numGoods);
                break;
                
            default:
                break;
        }
    }
       return canBuy;
}

// A casino trades 1 gold for a chance at a good
// 2:5 odds loosing
// 3:10 odds 2 gold
// 2:10 odds 3 gold
// 1:10 odds 10 gold
bool Casino::action(Player &player) {
    
    
    return false;
}





