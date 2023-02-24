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

  private:
   vector <int> m_counter;
   const static int m_FACES = 6;
};

#endif
