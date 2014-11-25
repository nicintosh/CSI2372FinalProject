//
//  tileFactory.cpp
//  CSI2372FinalProject
//
//  Created by Nick Burgel on 2014-11-24.
//  Copyright (c) 2014 Nick Burgel & Julien Turcotte. All rights reserved.
//

#include "tileFactory.h"
#include <iostream>
#include <math.h>
#include <vector>
#include <cstdlib>

using namespace std;

TileFactory::TileFactory(int _nTiles){
    nTiles = floor(_nTiles/14);
    int desert = _nTiles - (nTiles*13);
    for(int i = 0; i < nTiles; i++){
        tiles.push_back(Restaurant());
    }
    for(int i = 0; i < nTiles; i++){
        tiles.push_back(Smerchant());
    }
    for(int i = 0; i < nTiles; i++){
        tiles.push_back(Fmanu());
    }
    for(int i = 0; i < nTiles; i++){
        tiles.push_back(Jeweler());
    }
    for(int i = 0; i < nTiles; i++){
        tiles.push_back(CartM());
    }
    for(int i = 0; i < nTiles; i++){
        tiles.push_back(Smarket());
    }
    for(int i = 0; i < nTiles; i++){
        tiles.push_back(SPmarket());
    }
    for(int i = 0; i < nTiles; i++){
        tiles.push_back(Jmarket());
    }
    for(int i = 0; i < nTiles; i++){
        tiles.push_back(Fmarket());
    }
    for(int i = 0; i < nTiles; i++){
        tiles.push_back(Bmarket());
    }
    for(int i = 0; i < nTiles; i++){
        tiles.push_back(Casino());
    }
    for(int i = 0; i < nTiles; i++){
        tiles.push_back(Gmerch());
    }
    for(int i = 0; i < nTiles; i++){
        tiles.push_back(Palace());
    }
    for(int i = 0; i < desert; i++){
        tiles.push_back(Desert());
    }
    for(int i=0; i < _nTiles; i++){
        tilesIndex.push_back(i);
    }
};

Tile* TileFactory::next(){
    bool flag = true;
    int index;
    int value;
    index = rand()%tilesIndex.size();
    value = tilesIndex[index];
    tilesIndex.erase(tilesIndex.begin()+index);
    
    return &tiles.at(value);
}
void TileFactory::print(){
    cout<< nTiles << endl;
}