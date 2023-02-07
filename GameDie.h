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
   const static int SIDES = 6;
   int counter[SIDES];
};

#endif
