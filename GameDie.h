#include <vector>

#ifndef GAMEDIE_H
#define GAMEDIE_H

class GameDie
{
  public:
   GameDie();
   GameDie(unsigned int);
   vector<int> get_distribution();
   int roll();
  private:
   int FACES;
   std::vector<int> counter;
};

#endif
