#ifndef GAMEDIE_H
#define GAMEDIE_H

class GameDie
{
    public:
        GameDie();
        GameDie(unsigned int noOfSides);  //overloaded constructor for alternate sized die
        int roll();
    private:
        static int SIDES = 6;   //removed const so that we can assign new value of no. of faces for overloaded constructor
        int counter[SIDES];
};

#endif
