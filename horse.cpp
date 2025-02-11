//horse.cpp
#include "horse.h"
#include <iostream>
#include <random>

Horse::Horse(){
    id = 0;
    position = 0;
}

Horse::Horse(int id){
    this->id = id;
    position = 0;
}

void Horse::advance(){
    std::random_device rd;
    std::uniform_int_distribution<int> dist(0,1);
    int coin = dist(rd);
    if (coin == 0){
        position ++;
    }
    
}
void Horse::printLane(){
    for (int i = 0; i < TRACK_LENGTH; i++){
        if (i == position){
            std::cout << id;
        }
        else {
            std::cout << ".";
        }
    }
    std::cout << "" << std::endl;
        
}
bool Horse::isWinner(){
    std::cout << "isWinner" << std::endl;
}
