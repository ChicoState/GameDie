#ifndef GAMEDIE_H
#define GAMEDIE_H

class GameDie
{
  public:
   GameDie();
   GameDie(unsigned int val);
   int roll();
  vector <int> getDistribution();
  private:
   int FACES = 6;
   int counter[FACES];
};

#endif
