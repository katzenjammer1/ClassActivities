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
#include <string>
using namespace std;

class game{
public:
	std::vector<std::string> Items;
public:
	game();
	game(vector<string>& input);

	//getters
    const vector<string>& getItems() const;
	//setters
	void setItems(vector<string>& input);
	//methods

	void add(string object);

	void print();
	int iterate();
};

#endif /* GAME_H_ */
