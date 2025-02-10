//race.cpp
#include <iostream>
#include "race.h"
#include "horse.h"

Race::Race() {
    for (int i = 0; i < NUM_HORSES; i++) {
        horses[i] = Horse(i);
    }
}

void Race::start(){
    std::cout << "race started" << std::endl;
}
