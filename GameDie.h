#ifndef GAMEDIE_H
#define GAMEDIE_H
#include <vector>
using namespace std;
class GameDie
{
  public:
   GameDie();
   int roll();
   vector<int> get_distribution();
   GameDie(unsigned int a);
  private:
   int num;
   const static int FACES = 6;
   int counter[FACES];
   vector<int> vec1;
};

#endif
