#ifndef GAMEDIE_H
#define GAMEDIE_H

class GameDie
{
  public:
   GameDie();
   GameDie(unsigned int faceCount) // overloaded constructor
   int roll();
   vector<int> get_distribution() // distribution function
   int no_of_faces; // I created this variable
  private:
   const static int FACES = 6;
   int counter[FACES];
};

#endif