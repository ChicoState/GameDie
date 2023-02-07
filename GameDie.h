#ifndef GAMEDIE_H
#define GAMEDIE_H

#include <iostream>
#include <vector>
using namespace std;

class GameDie
{
  public:
    GameDie();
    GameDie(int faces);
    int roll();
  private:
    const static int SIDES = 6;
    int counter[SIDES];
};

#endif
