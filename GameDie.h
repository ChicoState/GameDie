#ifndef GAMEDIE_H
#define GAMEDIE_H

class GameDie
{
  public:
   GameDie();
   int roll();
   GameDie::GameDie(unsigned int) //Added Overload Constructor
   {
     int Sides=6;
   } ;
   int get_distribution();
  private:
   const static int FACES = 6;
   int counter[FACES];
};

#endif


