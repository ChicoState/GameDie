#ifndef GAMEDIE_H
#define GAMEDIE_H
#include <vector>
#include <iostream>
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
  vector<int> disributionArray;
};

#endif
