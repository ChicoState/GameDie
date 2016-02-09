#ifndef GAMEDIE_H
#define GAMEDIE_H


class GameDie
{
  public:
   GameDie();
   GameDie(int n);
   int roll();
   int numberOfSides;
};

#include "GameDie.cpp"
#endif
