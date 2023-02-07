#ifndef GAMEDIE_H
#define GAMEDIE_H

class GameDie
{
  public:
   GameDie();
   GameDie(unsigned int);
   int roll();
   vector get_distribution();
  private:
   int SIDES = 6;
   int counter[SIDES];
};

#endif
