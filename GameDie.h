#ifndef GAMEDIE_H
#define GAMEDIE_H

#include <vector>

class GameDie
{
  public:
   GameDie();
   int roll();
   vector<unsigned> get_distribution()

  private:
   const static int FACES = 6;
   int counter[FACES];
};

#endif
