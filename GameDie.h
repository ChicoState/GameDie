#ifndef GAMEDIE_H
#define GAMEDIE_H
#include <vector>

using std::vector;

class GameDie
{
  public:
   GameDie();
   GameDie(unsigned int);
   int roll();
   vector <int> get_distribution();
   vector<double> get_percentage();

  private:
   vector <int> roll_counter;
   vector <double> roll_percentage;
   int totalRolls;
   const static int FACES = 6;
};

#endif
