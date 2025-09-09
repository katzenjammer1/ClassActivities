//============================================================================
// Name        : CMPE126-classActivity.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================
#include <iostream>
#include <string>
using namespace std;
#include "Animal.h"

// Main function to test the classes
int main() {
// Create an instance of Animal
	Animal genericAnimal("Generic", 5);
	genericAnimal.makeSound();
	// Create an instance of Dog
	Dog dog("Buddy", 10, "Golden Retriever");
	dog.makeSound();

	cout<< dog << endl;
	// Create an instance of Cat
	Cat cat("Whiskers", 2, "Black");
	cat.makeSound();

	cout<< cat << endl;

	Cat Two;

	cin >> Two;
	cout<<Two<<endl;

	//who is older

	if (Two.isOlder(dog)){
		cout<< Two.getName()<< " is older."<< endl;
	}
	else{
		cout<< dog.getName()<< " is older."<< endl;
	}


	//OUTPUT
	/*
	 * BAAAAA SOUND
Bark
Dog Name:Buddy, Age: 10, Breed: Golden Retriever
Buddy is Old
Meow
Cat Name: Whiskers, Age: 2, Color: Black
Whiskers is Young
Enter name: Sara
Enter age: 7
Enter color: Orange
Cat Name: Sara, Age: 7, Color: Orange
Sara is Old
Buddy is older.
	 */


	return 0;
}
