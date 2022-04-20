#include "12hour.h"

/*The following cpp file contains all of the functions our _12HourClock class will use. We define the parameters
  the funtion will take in as h, m, and s and set those equal to our variables hours, minutes, and seconds. This
  is necessary so we will be able to initalize thos evariables later and pass them through this class. This first block is
  our "Constructor".*/

_12HourClock::_12HourClock(int h, int m, int s) {
	hours = h;
	minutes = m;
	seconds = s;
	ampm = AM;
}

	// The following three blocks will be our methods, handling user input and updating our 12-hour clock accordingly.

	/* Our addHour method handles instances where our user wants to add an hour to the clock. Since we are still
	   working with our 12 hour clock here, we need to make sure our hour display can not go past 12. We also need to
	   make use of our enumerator, as you see in the first if statement. Any time addHour is called and the hour is 
	   currently 11, ampm is check for a value. That way, when the clock hits 12 again, the function will switch from AM to PM,
	   or vice versa, to properly refelct the time of day.*/
void _12HourClock::addHour() {
	if (hours == 11) {
		ampm = ampm == AM ? PM : AM;
	}

	if (hours == 12) { // This if statement handles the scenario in which hours is currently at 12 and the user adds an hour.
		hours = 1;     // If the hour is 12, hour is reset to 1.

	}
	else { // For all other cases (when the hour is not 12) hours is simply incremented 1.
			hours += 1;
	}
}

	/* Our next two methods, addMinute and addSecond, will operate the same way our addHour method does, without the enumeration portion.
	   If it is the 59th minute of the hour, or the 59th second of the minute, the method will return to 0 and call the appropriate method 
	   to properly display the time. For example, if the time is 7:59:05, and the user adds a minute, minutes will be reset to zero. Since 
	   one minute after 7:59 is 8:00, addHour will also be called to add 1 to the hour. The same process will be followed for seconds and minutes. */

	void _12HourClock::addMinute() {
		if (minutes == 59) {
			minutes = 00;
			addHour();
		}
		else {
			minutes += 1;
		}
	}

	void _12HourClock::addSecond() {
		if (seconds == 59) {
			seconds = 00;
			addMinute();
		}
		else {
			seconds += 1;
		}
	}

	/* The next few blocks are our "getters". These functions will allow us to call the current value of our variables
	   innto our display function so the clock accurately depicts the changes we make to the time. */
	int _12HourClock::getHours() {
		return hours;
	}

	int _12HourClock::getMinutes() {
		return minutes;
	}

	int _12HourClock::getSeconds() {
		return seconds;
	}

	string _12HourClock::getAMPM() {
		if (ampm == AM) {
			return "A M ";
		}
		else {
			return "P M ";
		}
	}