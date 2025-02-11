//horse.h
#ifndef HORSE_H_EXISTS
#define HORSE_H_EXISTS
class Horse {
    private:
        int id;
        int position;
        static const int TRACK_LENGTH = 15;
    public:
        Horse();
        Horse(int id);
        void advance();
        void printLane();
        bool isWinner();
};

#endif

