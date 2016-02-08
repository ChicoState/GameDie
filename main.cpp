#include<iostream>
#include"GameDie.h"

int main(){
	GameDie G(20);
	std::cout<<"GameDie value : "<< G.roll() <<std::endl;

	return 0;
} 
