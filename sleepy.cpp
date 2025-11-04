#include<iostream>
using namespace std;

int main () {
	int sleepyHours; 
	string message;
	
	cout << "\nEnter the number of hours you slept: ";
	cin >> sleepyHours;
	
	if (sleepyHours >= 1 && sleepyHours <= 3) {
		message = "\nThat's not sleep."; 
	}
	else if (sleepyHours >= 4 && sleepyHours <= 6) {
		message = "\nYou're a light sleeper, or you didn't get that much sleep. "; 
	}
	else if (sleepyHours >= 7 && sleepyHours <= 9) {
		message = "\nThe average. ";
	}
	else if (sleepyHours >= 10 && sleepyHours <= 12) {
		message = "\nThe good duration. ";
	}
	else if (sleepyHours >= 14 && sleepyHours <= 16) {
		message = "\nI think you're tired, sick, ... or just a deep sleeper."; 
	}
	else if (sleepyHours > 17 && sleepyHours == 24) {
		message = "\nWAKE UP DAWG WAKE THE FUCK UP!!!!!";
	} // There are 24 hours in a day, so adding 25< will result in "Invalid entry"
	else {
		cout << "Invalid entry."; 
		return 1; 
	}
	
	cout << "\n" << message << endl; 
	
	return 0; 
}
