#include "GameDie.h"

#include <cstdlib>
#include <ctime>
#include <vector>

// class constructor that seeds the random number generator
GameDie::GameDie() {
  srand(time(NULL));
  roll_counter.resize(FACES);

  for (int i = 0; i < FACES; i++)
    roll_counter[i] = 0;
}

// overloaded constructor
GameDie::GameDie(unsigned int num) {
  if (num == 0) {
    roll_counter.resize(FACES);
  } else {
    roll_counter.resize(num);
  }
  for (int i = 0; i < FACES; i++) {
    roll_counter[i] = 0;
  }
}

// generate a random number between 1-n where n is the counter size
//  (inclusive) and return it
int GameDie::roll() {
  int roll = rand() % roll_counter.size();
  roll_counter[roll]++;
  return roll + 1;
}

// return the count of how many times each face has been rolled, as a vector
// where each face's count is at index face-1 (i.e. Face 1 is at index 0)

vector<int> GameDie::get_distribution() {
  return roll_counter;
}

// dd a public member function vector<double> GameDie::get_percentages() that returns the percentage of rolls for each face relative to the number of total rolls. Each percentage should be a double between 0 and 1 inclusively. For example, if we have a 4-sided die that has rolled each face 1 time and has the get_distribution() of:
// {1,1,1,1}
vector<double> GameDie::get_percentages() {
  vector<double> percentages;
  int total = 0;
  for (uint i = 0; i < roll_counter.size(); i++) {
    total += roll_counter[i];
  }
  for (uint i = 0; i < roll_counter.size(); i++) {
    percentages.push_back((double)roll_counter[i] / total);
  }
  return percentages;
}

#include <iostream>
int main() {
  // test get_percentages
  GameDie die(4);
  for (int i = 0; i < 4; i++) {
    die.roll();
  }
  vector<double> percentages = die.get_percentages();
  for (uint i = 0; i < percentages.size(); i++) {
    std::cout << percentages[i] << std::endl;
  }
}