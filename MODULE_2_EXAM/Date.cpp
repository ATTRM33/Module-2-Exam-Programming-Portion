#include "Date.h"
#include <iostream>
#include <string>


Date::Date() {
	month = 1;
	day = 1;
	year = 2000;

};

Date::Date(int m, int d, int y) {
	 month = m;
	 day = d;
	 year = y;
};

Date::~Date() {

}

void Date::setMonth(int m) {
	month = m;
	
}
void Date::setDay(int d) {
	day = d;
}
void Date::setYear(int y) {
	year = y;
}

std::string Date::dateToString(int month) const {
	std::string selection;
	selection = month;

	switch (month)
	{
	case 1:
		selection = "January";
		break;
	case 2:
		selection = "February";
		break;
	case 3:
		selection = "March";
		break;
	case 4:
		selection = "April";
		break;
	case 5:
		selection = "May";
		break;
	case 6:
		selection = "June";
		break;
	case 7:
		selection = "July";
		break;
	case 8:
		selection = "August";
		break;
	case 9:
		selection = "September";
		break;
	case 10:
		selection = "October";
		break;
	case 11:
		selection = "November";
		break;
	case 12:
		selection = "December";
		break;
	default:
		break;
	}

	return selection;
}

void Date::dateFormat1() {
	std::cout << month << "/" << day << "/" << year << std::endl;
}

void Date::dayMonthStringYear() {
	std::cout << day << " " << dateToString(month) << " " << year << std::endl;
}
void Date::monthStringDayYear() {
	std::cout << dateToString(month) << " " << day << " " << year << std::endl;
}