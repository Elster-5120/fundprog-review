#include<iostream>
using namespace std;

int main () {
	double finalGrade, gpa; 
	
	cout << "\nPlease enter the final grade: "; 
	cin >> finalGrade; 
	
	if (finalGrade < 0 && finalGrade < 100) {
		cout << "Invalid entry."; 
	}
	else if (finalGrade >= 0.00 && finalGrade <= 60) {
		gpa = 0.0; 
		cout << "\nAw, better luck next time!"; 
		cout << "\nI believe in you!"; 
	}
	else if (finalGrade >= 61 && finalGrade <= 63) {
		gpa = 0.7;
		cout << "\nOkay... small steps..."; 
	}
	else if (finalGrade >= 64 && finalGrade <= 66) {
		gpa = 1.0;
		cout << "\nJust a little more..."; 
	}
	else if (finalGrade >= 67 && finalGrade <= 69) {
		gpa = 1.3; 
		cout << "\nAt least you're trying..."; 
	}
	else if (finalGrade >= 70 && finalGrade <= 73) {
		gpa = 1.7; 
		cout << "\nJust like before, small steps..."; 
	}
	else if (finalGrade >= 74 && finalGrade <= 76) {
		gpa = 2.0; 
		cout << "\nYou're getting there!"; 
	}
	else if (finalGrade >= 77 && finalGrade <= 79) {
		gpa = 2.3; 
		cout << "\nCome on..."; 
	}
	else if (finalGrade >= 80 && finalGrade <= 83) {
		gpa = 2.7; 
		cout << "\nYou're almost there!"; 
	}
	else if (finalGrade >= 84 && finalGrade <= 86) {
		gpa = 3.0; 
		cout << "\nKeep going!"; 
	}
	else if (finalGrade >= 87 && finalGrade <= 89) {
		gpa = 3.3; 
		cout << "\nNice try!"; 
	}
	else if (finalGrade >= 90 && finalGrade <= 93) {
		gpa = 3.7;
		cout << "\nAmazing!"; 
	}
	else if (finalGrade >= 94 && finalGrade <= 100) {
		gpa = 4.0;
		cout << "\nOutstanding!"; 
	}
	cout << "\nThe equivalent GPA is " << gpa << ". " << endl; 
	
	return 0; 
}
