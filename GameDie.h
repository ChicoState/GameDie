#ifndef GAMEDIE_H
#define GAMEDIE_H

class GameDie
{
  public:
   GameDie();
   GameDie(unsigned int no);
   int roll();
   vector<int> get_distribution();
  private:
   int SIDES;
   int counter[SIDES];
   vector<int> roll;
};

#endif
