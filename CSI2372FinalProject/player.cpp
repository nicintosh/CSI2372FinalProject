//
//  player.cpp
//  CSI2372FinalProject
//
//  Created by Nick Burgel on 2014-11-24.
//  Copyright (c) 2014 Nick Burgel & Julien Turcotte. All rights reserved.
//

#include "player.h"

bool Player::canAct() const{
    if(food > 0){
        return true;
    }
    else{
        return false;
    }
}

bool Player::pay(Player& player){
    return true;
}

void Player::eat(){
    if(food > 0){
        food--;
    }
}

void Player::print(){
    cout<< gold << endl;
    cout<< ruby << endl;
    cout<< spice << endl;
    cout<< fabric << endl;
    cout<< jewel << endl;
    cout<< cart << endl;
    cout<< food << endl;
    
}

void Player::setGold(int value) {
    gold = value;
}

void Player::setRuby(int value) {
    ruby = value;
}

void Player::setSpice(int value) {
    spice = value;
}

void Player::setFabric(int value) {
    fabric = value;
}

void Player::setJewel(int value) {
    jewel = value;
}

void Player::setCart(int value) {
    cart = value;
}

void Player::setFood(int value) {
    food = value;
}

int Player::getGold() {
    return gold;
}

int Player::getRuby() {
    return ruby;
}

int Player::getSpice() {
    return spice;
}

int Player::getFabric() {
    return fabric;
}

int Player::getJewel() {
    return jewel;
}

int Player::getFood() {
    return food;
}

int Player::getCart() {
    return cart;
}

int Player::getCartSpace() {
    return cart-ruby-spice-fabric-jewel;
}