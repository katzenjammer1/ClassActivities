/*
 * game.h
 *
 *  Created on: Sep 25, 2025
 *      Author: kritivanipenta
 */

#ifndef GAME_H_
#define GAME_H_

#include <iostream>
#include <vector>
using namespace std;

class game{
private:
	vector <string> Items;
public:

    // Methods
    void add(const string& object);
    void print();

};

#endif /* GAME_H_ */
