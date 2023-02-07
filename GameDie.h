#ifndef GAMEDIE_H
#define GAMEDIE_H

class GameDie
{
  public:
   GameDie();
   GameDie(unsigned int);
   int roll();
   vector<int> get_distribution();
   
  private:
   const static int SIDES = 6;
   int counter[SIDES];
};

#endif
