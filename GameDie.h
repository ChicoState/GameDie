#include<vector>
#include<iostream>
#ifndef GAMEDIE_H
#define GAMEDIE_H

using std::vector;

class GameDie
{
  public:
   GameDie();
   GameDie(unsigned int);
   int roll();
   vector<int> get_distribution();

  private:

   vector<int> counter;
   const static int FACES = 6;
};

#endif
