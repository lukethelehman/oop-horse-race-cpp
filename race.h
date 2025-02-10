//race.h
#ifndef RACE_H_EXISTS
#define RACE_H_EXISTS
#include "horse.h"

class Race {
    private:
        int horses[5];
    public:
        Race();
        void start(int horses);
};

#endif
