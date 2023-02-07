#ifndef GAMEDIE_H
#define GAMEDIE_H

#include <vector>

class GameDie
{
  public:
   GameDie();
   int roll();
   std::vector<int> get_distribution();
  private:
   const int FACES = 6;
   std::vector<int> counter;
};

#endif
