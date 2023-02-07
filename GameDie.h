#ifndef GAMEDIE_H
#define GAMEDIE_H

#include <vector>

class GameDie
{
public:
 GameDie();
 GameDie(unsigned int faces);
 int roll();
 std::vector<int> get_distribution();
private:
 unsigned int FACES;
 std::vector<int> counter;
};

#endif
