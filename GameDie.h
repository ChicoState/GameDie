#ifndef GAMEDIE_H
#define GAMEDIE_H
#include <vector>
using namespace std;

class GameDie
{
  public:
   GameDie();
   GameDie(unsigned faces);
   int roll();
   vector<int> get_distribution();
  private:
   int SIDES = 6;
   vector<int> counter;
};

#endif
