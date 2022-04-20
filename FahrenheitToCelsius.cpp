#include <iostream>
#include <string>
#include <fstream>
#include <vector>
using namespace std;

/* This program will read in a list of cities and their respective temperatures, given in fahrenheit, from a text file. 
   The program will then convert the temperatures from fahrenheit to celsius, using a conversion function, and
   write the new temperatures with their respective cities to a new text file, titled CelsiusTemperature.txt. In main,
   we define out input and output streams inFS and outFS to allow the program to open and read in information from
   an existing txt file, and create and write a new text file with the new information. City names are defined as
   string type, temperatures are defined as integer type. We also define two vectors, one for city names (cityVector)
   and another for temps (tempVector), to store our data separately. This way, we can feed only our integer temp
   values into our function and leave the cities unchanged. An integer, i, is also defined for use in iterating through
   our vectors.
   Programmer: Jacob Sullivan
   Date: 6/3/2021
   */
int main() {
	ifstream inFS;
	int temp;
	string city;
	ofstream outFS;
	int tempF;
	int tempConversion(int tempF);
	vector<string> cityVector;
	vector<int> tempVector;
	int i;


	cout << "Opening File FahrenheitTemperature.txt" << endl;
	inFS.open("FahrenheitTemperature.txt");

	// This if statement is simply a safeguard, generating an error if our original text file is not opened correctly.
	if (!inFS.is_open()) {
		cout << "Could not open file FahrenheitTemperature.txt." << endl;
	}

	while (!inFS.eof()) { // Ensures the entire file is read until eof (end of file).

		// These statements take in data and save it to our respective vectors.
		inFS >> city;
		cityVector.push_back(city);
		inFS >> temp;
		tempVector.push_back(temp);
	}


	inFS.close();



	outFS.open("CelsiusTemperature.txt");

	if (!outFS.is_open()) {
		cout << "Could not open CelsiusTemperature.txt." << endl;
		return 1;
	}

	// This loop iterates through our vectors, puts our temp values through our conversion function, and formats output to our new txt file.
	for (i = 0; i < cityVector.size(); ++i) {
		tempVector[i] = tempConversion(tempVector[i]);
		outFS << cityVector[i];
		outFS << " " << tempVector[i] << endl;
	}

	outFS.close();

	return 0;
}

// This function handles the conversion of our temp valus from fahrenheit to celsius.
int tempConversion(int temp) {
	int tempC;
	int tempF = temp;

	tempC = (tempF - 32) * 5 / 9;
	return tempC;
}