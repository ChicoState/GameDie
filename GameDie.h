// #include <stdlib.h>
#include <vector>

#ifndef GAMEDIE_H
#define GAMEDIE_H

class GameDie
{
  public:
   GameDie();
   GameDie(unsigned int);
   int roll();
  private:
   int FACES;
   std::vector<int> counter;
};

#endif
