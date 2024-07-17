//Zach Brown
//Date: 07/17/2024
//CS2 problem Main program

#include <iostream>
#include "Date.h"
#include "Dog.h"

using namespace std;

int main() {
	//date objects
	Date birthday;
	Date anniversary(5,16,2018);

	birthday.setDay(14);
	birthday.setMonth(4);
	birthday.setYear(1993);

	cout << " " << endl;

	birthday.dateFormat1();
	birthday.dayMonthStringYear();
	birthday.monthStringDayYear();

	cout << " " << endl;

	anniversary.dateFormat1();
	anniversary.dayMonthStringYear();
	anniversary.monthStringDayYear();

	// dog objects
	Dog germanSheppard(3,"Zeus", "German Sheppard");
	Dog goldenRetriever(6, "Shadow", "Golden Retriever");
	Dog daachsund(11, "Weenie", "Daachsund");

	cout << germanSheppard.getDescription(germanSheppard.getBreed()) << endl;
	cout << "\n";

	cout << goldenRetriever.getDescription(goldenRetriever.getBreed()) << endl;
	cout << "\n";

	cout << goldenRetriever.dogToHumanYears(goldenRetriever.getAge()) << endl;
	cout << "\n";

	cout << daachsund.playFetch() << endl;

	cout << "\n";
	cout << germanSheppard.rollOver() << endl;



}