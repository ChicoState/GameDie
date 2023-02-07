#ifndef GAMEDIE_H
#define GAMEDIE_H

#include<vector>
#include<iostream>
using namespace std;

class GameDie
{
    public:
        GameDie();
        GameDie(unsigned int noOfSides);  //overloaded constructor for alternate sized die
        vector<int> get_distribution(unsigned int noOfTimes); //function to get distribution of the face values.
        int roll();
    private:
        static int SIDES = 6;   //removed const so that we can assign new value of no. of faces for overloaded constructor
        vector<int> counter;  //vector to store the counter for each face
};

#endif
