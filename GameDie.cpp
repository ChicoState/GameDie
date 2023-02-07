#include "GameDie.h"
#include <cstdlib>
#include <ctime>
#include <vector>
using std::vector;
#include <iostream>
using namespace std;

// class constructor that seeds the random number generator
GameDie::GameDie()
{
    srand(time(NULL));
    for (int i = 0; i < FACES; i++)
        counter[i] = 0;
}

// generate a random number between 1-6 (inclusive) and return it
int GameDie::roll()
{
    int roll = rand() % FACES;
    counter[roll]++;
    return roll + 1;
}

std::vector<int> GameDie::get_distribution()
{
    std::vector<int> x;
    for (auto i : counter)
        x.push_back(i);
    return x;
}

// int main()
// {
//     GameDie x;
//     vector<int> z = x.get_distribution();
//     for (auto i : z)
//         cout << i;
// }
