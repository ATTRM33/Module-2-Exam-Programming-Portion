#pragma once
#ifndef DOG_H
#define DOG_H

#include <string>

class Dog
{private:
	int age;
	std::string name;
	std::string breed;
public:
	Dog();
	Dog(int a, std::string n, std::string b);
	int dogToHumanYears(int age);
	std::string getDescription(std::string breed);
	std::string playFetch();
	std::string rollOver();
	std::string getBreed();
	std::string getname();
	int getAge();


};

#endif // !DOG_H