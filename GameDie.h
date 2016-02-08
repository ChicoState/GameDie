#ifndef GAMEDIE_H
#define GAMEDIE_H

class GameDie
{
  private:
  int no_sides;
  public:
   GameDie(int no_sides);
   int roll();
};

#include "GameDie.cpp"
#endif
