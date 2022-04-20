#pragma once
#include <iostream>
#include <string>
using namespace std;

/*This file is our h file for our _12HourClock class. It simply handles the definition
of our _12HourClock class and all of the variables and "getters" we will need for this
class to function properly. It also includes an enumeration block to handle switching between
AM and PM whenever the clock hits hours = 12. */
class _12HourClock {

public:
	enum morningNight {
		AM, PM
	}ampm;
	_12HourClock(int h, int m, int s);
	void addHour();
	void addMinute();
	void addSecond();
	int getHours();
	int getMinutes();
	int getSeconds();
	string getAMPM();
private:
	int hours;
	int minutes;
	int seconds;
};