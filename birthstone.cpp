#include<iostream>
#include<string>
using namespace std; 

int main () {
	int month, day; 
	string birthStone; 
	bool valid = true; 
	
	cout << "\n1 = January\n2 = February\n3 = March\n4 = April\n5 = May\n6 = June\n7 = July\n8 = August\n9 = September\n10 = October\n11 = November\n12 = December"; 
	cout << "\nEnter the month of your birthday: "; 
	cin >> month; 
	cout << "\nEnter the day of your birthday: "; 
	cin >> day; 
	
	if (month < 1 || month > 12 || day < 1 || day > 31) {
        valid = false;
    }
    else if ((month == 2 && day > 29) || 
             ((month == 4 || month == 6 || month == 9 || month == 11) && day > 30)) {
        valid = false;
    }

    if (!valid) {
        cout << "\nInvalid date. Please enter a valid month and day.\n";
        return 0;
    }
	
	//Determine your birthstone 
	if (month == 1 && day >= 1 || month == 1 && day <= 31) birthStone = "Garnet"; 
	else if (month == 2 && day >= 1 || month == 2 && day <= 29) birthStone = "Amethyst"; 
	else if (month == 3 && day >= 1 || month == 3 && day <= 31) birthStone = "Aquamarine";
	else if (month == 4 && day >= 1 || month == 4 && day <= 30) birthStone = "Diamond";
	else if (month == 5 && day >= 1 || month == 5 && day <= 31) birthStone = "Emerald"; 
	else if (month == 6 && day >= 1 || month == 6 && day <= 30) birthStone = "Pearl"; 
	else if (month == 7 && day >= 1 || month == 7 && day <= 31) birthStone = "Ruby"; 
	else if (month == 8 && day >= 1 || month == 8 && day <= 31) birthStone = "Peridot"; 
	else if (month == 9 && day >= 1 || month == 9 && day <= 31) birthStone = "Sapphire"; 
	else if (month == 10 && day >= 1 || month == 10 && day <= 31) birthStone = "Opal"; 
	else if (month == 11 && day >= 1 || month == 11 && day <= 30) birthStone = "Topaz";
	else if (month == 12 && day >= 1 || month == 12 && day <= 31) birthStone = "Tanzanite"; 
	
	cout << "\nYour birthstone is " << birthStone << "." << endl; 
	
	return 0; 
}
