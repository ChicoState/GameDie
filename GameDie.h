#ifndef GAMEDIE_H
#define GAMEDIE_H


class GameDie
{
  public:
   GameDie();
   GameDie(unsigned int a);
   int roll();
   vector<int> get_distribution();
  
  private:
   int SIDES;
   int counter[6];
};

#endif
