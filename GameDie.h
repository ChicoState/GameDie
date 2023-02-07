#ifndef GAMEDIE_H
#define GAMEDIE_H

#include <vector>

class GameDie
{
  public:
   GameDie();
   GameDie(unsigned int);
   int roll();
   std::vector<int> get_distribution();
  private:
   int SIDES = 6;
   std::vector<int> counter;
};

#endif
