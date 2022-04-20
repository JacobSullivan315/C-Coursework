#pragma once

/* This h file is for our other _24HourClock class and functions the exact same way as our 12Hour.h file. 
   Our enum block in our 12Hour.h file is unecessary here because a standard 24 hour clock does not use 
   AM or PM to denote the time of day. */
class _24HourClock {
private:
	int hours;
	int minutes;
	int seconds;
public:
	_24HourClock(int h, int m, int s);
	void addHour();
	void addMinute();
	void addSecond();
	int getHours();
	int getMinutes();
	int getSeconds();
};