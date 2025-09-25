/*
 * game.cpp
 *
 *  Created on: Sep 25, 2025
 *      Author: kritivanipenta
 */
#include "game.h"
#include <iostream>
#include <vector>


void game::add(const string& object) {
    Items.push_back(object);
}

void game::print(){
	for (int i = 0; i<Items.size(); i++){
		cout<< "(" << i << ")" << Items[i] << endl;
	}
}



