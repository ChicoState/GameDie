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
   vector <double> get_percentages();
   vector <double> percentages;
   int total;

  private:
   vector <int> roll_counter;
   const static int FACES = 6;
};

#endif
