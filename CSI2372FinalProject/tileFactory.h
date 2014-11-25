//
//  tileFactory.h
//  CSI2372FinalProject
//
//  Created by Nick Burgel on 2014-11-24.
//  Copyright (c) 2014 Nick Burgel & Julien Turcotte. All rights reserved.
//

#ifndef __CSI2372FinalProject__tileFactory__
#define __CSI2372FinalProject__tileFactory__

#include <stdio.h>
#include <vector>
#include "tile.h"

using namespace std;

class TileFactory{
    int nTiles;
    vector<Tile> tiles;
    vector<int> tilesIndex;
public:
    TileFactory();
    TileFactory(int _nTiles);
    static TileFactory *get(int _nTiles){
        static TileFactory tf(_nTiles);
        return &tf;
    };
    Tile* next();
    void print();
};

#endif /* defined(__CSI2372FinalProject__tileFactory__) */
