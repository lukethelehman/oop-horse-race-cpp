//horse.cpp
#include "horse.h"

Horse::Horse(){
    Horse::id = 0;
}

Horse::Horse(int id):
    Horse::id = id;

void advance(int id, int position){
    Horse::id
