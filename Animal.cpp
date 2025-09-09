/*
 * Animal.cpp
 *
 *  Created on: Sep 2, 2025
 *      Author: kritivanipenta
 */

#include "Animal.h"

// Implementations of Animal class methods

// Default constructor
Animal::Animal() {
	// TODO: Initialize attributes
}

// Parameterized constructor
Animal::Animal(const std::string& n, int a) {
	// TODO: Initialize attributes

	name = n;
	age = a;
}

// Getter for name
std::string Animal::getName() const {
	// TODO: Return the name
	return name;
}

// Setter for name
void Animal::setName(const std::string& n) {
	// TODO: Set the name
	name = n;
}

// Getter for age
int Animal::getAge() const {
	// TODO: Return the age
	return age;
}

// Setter for age
void Animal::setAge(int a) {
	// TODO: Set the age
	age = a;
}

// Virtual method makeSound()
void Animal::makeSound() const {
	// TODO: Implement a generic sound or leave empty
	cout<<"BAAAAA SOUND"<< endl;
}

bool Animal::isYoung() const{
	return age <= 2;
}

bool Animal::isOlder(const Animal& other)const{
	return this->age > other.age;
}

bool Animal:: isOlder(int a)const {
	return this-> age > a;
}



// Implementations of Dog class methods
// Default constructor
Dog::Dog() {
	// TODO: Initialize attributes
}

// Parameterized constructor
Dog::Dog(const std::string& name, int age, const std::string& b) : Animal(name, age) {
	// TODO: Initialize breed
	breed = b;
}

// Getter for breed
std::string Dog::getBreed() const {
	// TODO: Return the breed
	return breed;
}

// Setter for breed
void Dog::setBreed(const std::string& b) {
	// TODO: Set the breed
	breed = b;
}

// Override makeSound()
void Dog::makeSound() const {
	// TODO: Output the sound a dog makes
	cout<<"Bark"<< endl;
}

ostream& operator<<(ostream& out, const Dog& p){
	out <<"Dog Name:" << p.getName() << ", Age: " << p.getAge() << ", Breed: " << p.getBreed()<<endl;
	if (p.isYoung()){
		out<< p.getName() << " is Young";
	}
	else{
		out<< p.getName() << " is Old";
	}
	return out;
}

// Implementations of Cat class methods
// Default constructor
Cat::Cat() {
	// TODO: Initialize attributes
}

// Parameterized constructor
	Cat::Cat(const std::string& name, int age, const std::string& c) : Animal(name,age) {
	// TODO: Initialize color
		color = c;
}

// Getter for color
std::string Cat::getColor() const {
	// TODO: Return the color
	return color;
}

// Setter for color
void Cat::setColor(const std::string& c) {
	// TODO: Set the color
	color = c;
}

// Override makeSound()
void Cat::makeSound() const {
	// TODO: Output the sound a cat makes
	cout<< "Meow"<< endl;
}

ostream& operator<<(ostream& out, const Cat& p){
	out<<"Cat Name: " << p.getName() << ", Age: " << p.getAge() << ", Color: " << p.getColor() << endl;
	if (p.isYoung()){
		out<< p.getName() << " is Young";
	}
	else{
		out<< p.getName() << " is Old";
	}
	return out;
}

istream& operator>>(istream& in, Cat& p){
	string name, color;
	int age;

	cout<<"Enter name: ";
	in >> name;
	cout<<"Enter age: ";
	in >> age;
	cout<<"Enter color: ";
	in >> color;


	p.setName(name);
	p.setAge(age);
	p.setColor(color);

	return in;
}


