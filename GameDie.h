#ifndef GAMEDIE_H
#define GAMEDIE_H

#include <vector>

class GameDie
{
  public:
   GameDie();
   GameDie(unsigned int faces);
   int roll();
  private:
   int faces;
   std::vector<int> counter;
};

#endif
