#ifndef GAMEDIE_H
#define GAMEDIE_H
#include <vector>
#include <iostream>
class GameDie
{
  public:
   GameDie();
   GameDie(unsigned int val);
   int roll();
  private:
   const static int SIDES = 6;
   int counter[SIDES];
   std::vector<int> disCounter;
};

#endif
