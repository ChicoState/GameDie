#ifndef GAMEDIE_H
#define GAMEDIE_H
#include <vector>

using namespace std;

class GameDie
{
  public:
   GameDie();
   GameDie(int sides);
   int roll();
   vector<int> get_distribution();
  private:
   const static int SIDES = 6;
   int counter[SIDES];
   vector<int> dist = {0,0,0,0,0,0};
   const static int FACES = 6;
   int counter[FACES];
};

#endif
