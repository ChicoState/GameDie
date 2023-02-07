#include "GameDie.h"
#include <cstdlib>
#include <ctime>
#include <vector>
#include <algorithm>
#include <numeric>
//class constructor that seeds the random number generator
GameDie::GameDie()
{
    srand(time(NULL));
    for(int i=0; i<SIDES; i++)
      counter[i] = 0;
}

//generate a random number between 1-6 (inclusive) and return it
int GameDie::roll()
{
    int roll = rand() % SIDES;
    counter[roll]++;
    return roll + 1;
}

std::vector<double> GameDie::get_distribution() const
{
  std::vector<double> distribution(SIDES);
  int total_rolls = std::accumulate(counter, counter + SIDES, 0);
  for (int i = 0; i < SIDES; i++)
  {
    distribution[i] = static_cast<double>(counter[i]) / total_rolls;
  }
  return distribution;
}


GameDie::GameDie(unsigned int faces)
{
  if (faces == 0)
  {
    faces = 6;
  }
  SIDES = faces;
  std::fill(counter, counter + SIDES, 0);
  distribution.resize(SIDES);
}

