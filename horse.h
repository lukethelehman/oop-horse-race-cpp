//horse.h
#ifndef HORSE_H_EXISTS
#define HORSE_H_EXISTS

class Horse {
    private:
        int id;
        int position;
    public:
        Horse();
        Horse(int id);
        void advance(int id, int position);
        void printLane(int id, int position);
        bool isWinner(int id, int position);
};

#endif

