/*
 * game.cpp
 *
 *  Created on: Sep 25, 2025
 *      Author: kritivanipenta
 */

#include "game.h"
#include <vector>

const vector<string>& getItems() const {
        return Items;
    }

vector<string> add(string object){
	vector<string> newList = getItems();
	string addition;
		cout<<"Enter a item to add: "<< endl;
		cin>> addition;
		newList.push_back(addition);

	return newList;

}
game use(vector <string>& Items){

}
game print(vector <string>& Items){

}




