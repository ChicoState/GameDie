#ifndef GAMEDIE_H
#define GAMEDIE_H
#include <vector> // change 1 - including #include<vector>
using namespace std; // change 1 - including std
class GameDie
{
  public:
   GameDie();
   GameDie(unsigned int); // change-2 creating an overloaded constructor
   int roll();
   vector<int>get_distribution(); // change 1 - created a public function as named to return a vector
  private:
   int FACES ;  //change - 2 Changing the static constant value, in order to make them modifiable
   int counter[]; 
};

#endif
