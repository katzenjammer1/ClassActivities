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
	vector <string> Items();
public:
	game();

	//getters
    const vector<string>& getItems() const;
	//setters

	//methods

	vector<string> add(string object);
	game use(vector <string>& Items);
	game print(vector <string>& Items);
};

#endif /* GAME_H_ */
