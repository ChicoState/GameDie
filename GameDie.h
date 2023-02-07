#ifndef GAMEDIE_H
#define GAMEDIE_H
#include<vector>

class GameDie
{
  public:
   GameDie();
   GameDie(int size);
   int roll();
  private:
   int SIDES;
   std::vector<int> counter;
   int SIDES = 6;
   vector<int> counter;
};

#endif
