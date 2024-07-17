#include "Dog.h"


Dog::Dog(int a, std::string n, std::string b) {
	age = a;
	name = n;
	breed = b;
}
int Dog::dogToHumanYears(int age) {
	int humanYears;
	humanYears = age * 7;

	return humanYears;
}
std::string Dog::getDescription(std::string breed) {
	std::string description;
	if (breed == "German Sheppard") {
		description = "Known for their brown and black fur, these dogs of German decent have high intelligence and pointy ears.";
	}
	else if (breed == "Golden Retriever") {
		description = "Golden fur with low hanging ears, these are a gentle and loyal breed of dog.";
	}
	else if (breed == "Daachsund") {
		description = "Also know as a \"Weenie dog\", these dogs are know for their elongated torso and short legs. ";
	}

	return description;
}
std::string Dog::playFetch() {
	std::string doTrick;
	doTrick = "The dog runs with all its energy towards the stick running just past it before retrieving it in its mouth and return back to you.";
	return doTrick;
}
std::string Dog::rollOver() {
	std::string doTrick;
	doTrick = "The dog rolls over on it back and then back up at to its feet";

	
	return doTrick;
}


std::string Dog::getBreed() {
	return breed;
}
std::string Dog::getname() {
	return name;
}
int Dog::getAge() {
	return age;
}