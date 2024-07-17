#pragma once
#ifndef DATE_H
#define DATE_H


#include <iostream>


class Date
{private:
	int month;
	int day;
	int year;
public:
	Date();
	Date(int m, int d, int y);
	~Date();
	void setMonth(int m);
	void setDay(int d);
	void setYear(int y);
	std::string dateToString(int month) const;
	void dateFormat1();
	void dayMonthStringYear();
	void monthStringDayYear();
	
};


#endif 
