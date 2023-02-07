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
};

#endif
