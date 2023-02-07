#ifndef GAMEDIE_H
#define GAMEDIE_H

class GameDie
{
<<<<<<< HEAD
public:
  GameDie();
  GameDie(unsigned int);
  int roll();
  vector<int> get_distribution();

private:
  const static int SIDES = 6;
  int counter[SIDES];
=======
  public:
   GameDie();
   int roll();
  private:
   const static int FACES = 6;
   int counter[FACES];
>>>>>>> 6874c1fb4404664abbf2f823d682d3829168f9d4
};

#endif
