//
//  main.cpp
//  CSI2372FinalProject
//
//  Created by Nick Burgel on 2014-11-24.
//  Copyright (c) 2014 Nick Burgel & Julien Turcotte. All rights reserved.
//

#include <iostream>
#include "tileFactory.h"

int main(int argc, const char * argv[]) {
    TileFactory tf(36);
    for(int i = 0; i < 6; i++){
        for(int j = 0; j<6;j++){
            tf.next();
        }
    }
    return 0;
}
