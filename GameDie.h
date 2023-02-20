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

  private:
   vector <double> percentages;
   vector <int> counter;
   int total;
   const static int FACES = 6;
};

#endif
