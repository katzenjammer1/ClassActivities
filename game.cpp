/*
 * game.cpp
 *
 *  Created on: Sep 25, 2025
 *      Author: kritivanipenta
 */

#include "game.h"
#include <iostream>
#include <vector>
#include <string>
using namespace std;

game::game() : Items(){}

game::game(std::vector<std::string>& input) : Items(input){}

const std::vector<std::string>& game::getItems() const {
        return Items;
    }


void game::setItems(vector<string>& input) {
    for (std::string in : input){
		Items.push_back(in);
	}
}

void game::add(string object){
	Items.push_back(object);
}

void game::print(){
	cout << "Your items: " << endl;
	for (int i = 0; i < Items.size(); i++){
		if (i != Items.size()-1){
			cout << Items.at(i) << ", ";
		}
		else if(i == Items.size()-1){
			cout << Items.at(i);
		}
	}
}

int game::iterate(){
	int index;
	index = 0;
	string input;
	cout << "Enter > to go forward, < to go back, and press ENTER to enter and quit: \n" << endl;
	cout << Items.at(index) << endl;
	while(true){
		input = "";
		getline(cin, input);
		
		if (input.empty()){
			break;
		}
		if (input == "<"){
			if (index > 0){
				index--;
				cout<< Items.at(index) << endl;
			}
			else if (index == 0){
				cout << "Cannot go back further.";
			}
		}
		if (input == ">"){
			if (index == Items.size()-1){
				cout << "At end of items list already." << endl;
			}
			else{
				index++;
				cout << Items.at(index) << endl;
				
			}
		}
	}
	return index;
}	





