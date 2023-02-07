#ifndef GAMEDIE_H
#define GAMEDIE_H
#include <vector>
using namespace std;
class GameDie
{
public:
  GameDie();
  GameDie(unsigned custom_faces);
  int roll();
  vector<int> get_distribution();

private:
  const static int SIDES = 6;
  vector<unsigned> counter;
};

#endif
