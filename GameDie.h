#ifndef GAMEDIE_H
#define GAMEDIE_H
#include <vector> // change 1 - including #include<vector>
using namespace std; // change 1 - including std
class GameDie
{
  public:
   GameDie();
   int roll();
   vector<int>get_distribution(); // change 1 - created a public function as named to return a vector
  private:
   const static int FACES = 6;
   int counter[FACES];
};

#endif
