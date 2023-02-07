#ifndef GAMEDIE_H
#define GAMEDIE_H

#include <vector>

class GameDie
{
  public:
   GameDie();
   GameDie(unsigned int);
   int roll();
  private:
   unsigned int currentFaces;
   std::vector<int> counter;
};

#endif
