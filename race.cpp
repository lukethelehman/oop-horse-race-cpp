//race.cpp
#include <iostream>
#include "race.h"
#include "horse.h"

Race::Race() {
    horses[0] = Horse(0);
    horses[1] = Horse(1);
    horses[2] = Horse(2);
    horses[3] = Horse(3);
    horses[4] = Horse(4);

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
