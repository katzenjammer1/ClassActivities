//============================================================================
// Name        : classActivity2.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <vector>
#include "game.h"
using namespace std;

int main() {

	cout << "!!!Hello World!!!" << endl; // prints !!!Hello World!!!

	//add, remove, and iterate over items.
	game Sally;
	Sally.add("Potion");
	Sally.add("Sword");

	Sally.print();
	Sally.iterate();

	return 0;
}


