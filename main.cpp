#include <iostream>
#include <cstdlib>
#include <time.h>
#include "GameDie.h"
using namespace std;
int main()
{
    GameDie gd;
    int getroll = gd.roll();
    cout << "You got " << getroll << " . Yay !!!" << endl;
}
