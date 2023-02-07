#ifndef GAMEDIE_H
#define GAMEDIE_H

class GameDie
{
public:
  GameDie(); // default constructor
  int roll();
  GameDie(unsigned int); // overloaded constructor for issue 43

private:
  const static int SIDES = 6;
  int counter[SIDES];
};

#endif
