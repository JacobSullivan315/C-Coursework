#include "24Hour.h"

/* The following cpp file defines all of our functions for our _24HourClock class. It functions just as our
12 hour clock class does, without the enumeration portion. Again, we begin with a constructor to initialize our variables.*/

_24HourClock::_24HourClock(int h, int m, int s) {
	hours = h;
	minutes = m;
	seconds = s;
}
	// The following three blocks will be our methods, handling user input and updating our 24-hour clock accordingly.
	/* Our addHour method handles instances where our user wants to add an hour to the clock. Since we are still
	   working with our 24-hour clock here, we need to make sure our hour display can not go past 23. */
	void _24HourClock::addHour() {
		if (hours == 23) { // This if statement handles the scenario in which hours is currently at 23 and the user adds an hour.
			hours = 0;     // If the hour is 23, hour is reset to 0.

		}

		else { // For all other cases (when the hour is not 23) hours is simply incremented 1.
			hours += 1;
		}
	}

	/* Our next two methods, addMinute and addSecond, will operate the same way our addHour method does. If it is the 59th minute of
	   the hour, or the 59th second of the minute, the method will return to 0 and call the appropriate method to properly display the time.
	   For example, if the time is 07:59:05, and the user adds a minute, minutes will be reset to zero. Since one minute after 7:59 is 8:00,
	   addHour will also be called to add 1 to the hour. The same process will be followed for seconds and minutes. */

	void _24HourClock::addMinute() {
		if (minutes == 59) {
			minutes = 0;
			addHour();
		}
		else {
			minutes += 1;
		}
	}

	void _24HourClock::addSecond() {
		if (seconds == 59) {
			seconds = 0;
			addMinute();
		}
		else {
			seconds += 1;
		}
	}


	/* Again, we include a series of "getters" to ensure we can access the updated values of each of our variables
	   to ensure our display accurately displays the time, while staying concurrent with user input. */
	int _24HourClock::getHours() {
		return hours;
	}

	int _24HourClock::getMinutes() {
		return minutes;
	}

	int _24HourClock::getSeconds() {
		return seconds;
	}
