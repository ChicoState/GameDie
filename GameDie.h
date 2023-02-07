#ifndef GAMEDIE_H
#define GAMEDIE_H

class GameDie
{
  public:
   GameDie();
   GameDie(unsigned int SIDES);
   int roll();
   get_distribution();
  private:
   cont static int SIDES = 6;
   int counter[SIDES];

};

#endif
