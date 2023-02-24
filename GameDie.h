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
   int total;
   vector <int> m_counter;
   vector <double> m_percentages;
   const static int m_FACES = 6;
};

#endif
