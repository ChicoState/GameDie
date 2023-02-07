#ifndef GAMEDIE_H
#define GAMEDIE_H
#include <vector>
class GameDie
{
  public:
   GameDie();
   int roll();
   vector<double> get_distribution()
   GameDie(unsigned int faces)

  private:
   const static int SIDES = 6;
   int counter[SIDES];
};

#endif
