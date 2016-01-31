/*
Name : Rahul Shinde
Game Die Program
*/

#include<iostream>
#include<cstdlib>
#include "GameDie.h"

int main()
{

GameDie gd;
int randNo = gd.roll();
std::cout << "Random Number is : "<<randNo << std::endl;
return 0;
}
