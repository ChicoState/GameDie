#ifndef GAMEDIE_H
#define GAMEDIE_H
#include<vector>
using namespace std;
class GameDie
{
  public:
   GameDie();
   GameDie(unsigned v);
   int roll();
  private:
   int SIDES;
   vector<int> counter;
};

#endif
