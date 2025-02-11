//race.cpp
#include <iostream>
#include "race.h"
#include "horse.h"

Race::Race() {
    for (int i = 0; i < NUM_HORSES; i++){
        horses[i] = Horse(i);
    }
}

void Race::start(){
    bool keepGoing = true;
    while(keepGoing) {

        for (int i = 0; i < NUM_HORSES; i++) {
            horses[i].advance();
            if (horses[i].isWinner()){
                std::cout << "Horse " << i << " wins!!!" << std::endl;
                keepGoing = false;
            }
            else {
                horses[i].printLane();
            }
        }

        std::cout << "press ENTER for another round";
        std::cin.ignore();
    }

}
