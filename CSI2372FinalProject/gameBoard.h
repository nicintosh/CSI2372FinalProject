//
//  gameBoard.h
//  CSI2372FinalProject
//
//  Created by Nick Burgel on 2014-11-24.
//  Copyright (c) 2014 Nick Burgel & Julien Turcotte. All rights reserved.
//

#ifndef __CSI2372FinalProject__gameBoard__
#define __CSI2372FinalProject__gameBoard__

#include <stdio.h>
#include <iostream>
#include <vector>

template<typename T, typename J, int R, int C>
class GameBoard{
    enum Move {up, down, left, right};
    
    
public:
    GameBoard();
    void add(const T& tile, int row, int col);
    const T& getTile(int row, int col) const;
    void getCoordinate(const T &tile, int *row, int*col) const;
    void setPlayer(J player);
    J getPlayer(const std::string& playerName);
    const T& getTile(const std::string& playerName) const;
    std::vector<J> getPlayers(const T& tile) const;
    const T& move(enum Move move, const std::string& playerName);
    
};

#endif /* defined(__CSI2372FinalProject__gameBoard__) */
