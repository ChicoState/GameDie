#ifndef GAMEDIE_H
#define GAMEDIE_H
#include <vector>
#include <iostream>
class GameDie
{
  public:
   GameDie();
   std::vector<int> get_distribution();
   int roll();
  private:
   const static int SIDES = 6;
   int counter[SIDES];
};

#endif
