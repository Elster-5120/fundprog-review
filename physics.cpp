#include<iostream>
using namespace std; 

int main () {
	int choice; 
	double work, force, distance; //Work
	double kinetic_energy, mass, velocity; //Kinetic Energy
	double wavelength, frequency;  // Wavelength
	
	cout << "\n== PHYSICS =="; 
	cout << "\nSelect 1 for the formula for Work, 2 for Kinetic Energy, 3 for Wavelength.";
	cout << "\nEnter your selection: ";
	cin >> choice; 
	
	switch(choice) {
		case 1: {
			cout << "\nYou have picked WORK."; 
			cout << "\nEnter the force: ";
			cin >> force; 
			cout << "\nNow enter the distance: "; 
			cin >> distance; 
			work = force * distance; 
			cout << "Therefore, the work is " << work << " joules." << endl; //fucking grammar dawg
			break;
		}
		case 2: {
			cout << "\nYou have picked KINETIC ENERGY."; 
			cout << "\nEnter the mass of the object (kg): ";
			cin >> mass; 
			cout << "\nEnter the velocity (m/s): ";
			cin >> velocity; 
			kinetic_energy = 0.5 * mass * velocity * velocity; 
			cout << "Kinetic energy = " << kinetic_energy << "joules.\n"; 
			break;
		}
		case 3: {
			cout << "\nYou have picked WAVELENGTH."; 
			cout << "\nNow enter the velocity (m/s): "; 
			cin >> velocity; 
			cout << "\nNow enter the frequency (Hz): ";
			cin >> frequency; 
			wavelength = velocity / frequency; 
			cout << "Therefore, the wavelength is " << wavelength << "." << endl; 
			break;
		}
		default: {
			cout << "\nInvalid entry! Program terminating."; 
			break;
		}
	}
	
	return 0; 
}
