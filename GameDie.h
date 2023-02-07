#ifndef GAMEDIE_H
#define GAMEDIE_H

#include <vector>

class GameDie
{
  public:
   GameDie();
   GameDie(unsigned nFACES);
   int roll();
   vector<unsigned> get_distribution()

  private:
   int FACES = 6;
   int counter[FACES];
};

#endif
