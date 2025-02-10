//horse.cpp
#include "horse.h"
#include <iostream>

Horse::Horse(){
    id = 0;
    position = 0;
}

Horse::Horse(int id){
    this->id = id;
}

void Horse::advance(){
    std::cout << "advance" << std::endl;
}
void Horse::printLane(){
    std::cout << "my id is " << id << std::endl;
}
bool Horse::isWinner(){
    std::cout << "isWinner" << std::endl;
}
