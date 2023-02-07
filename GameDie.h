#ifndef GAMEDIE_H
#define GAMEDIE_H
#include <vector>
using std::vector;
class GameDie
{
public:
  GameDie();
  GameDie(int x);
  int roll();
  std::vector<int> get_distribution();

private:
  const static int FACES = 6;
  int counter[FACES];
};

#endif
