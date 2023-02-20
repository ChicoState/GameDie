#include <iostream>
using namespace std;

#include "GameDie.h"

int main(){
    GameDie test;
    test.roll();
    cout << "you roll "; 
    test.get_distribution();
}