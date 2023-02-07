#ifndef GAMEDIE_H
#define GAMEDIE_H
#include <vector>
using namespace std;

class GameDie
{
public:
  GameDie();
  GameDie(unsigned int n);
  int roll();
  vector<int> get_distribution();

private:
  const static int SIDES = 6;
  int counter[SIDES];
};

#endif
