#include<iostream>
#include<cmath>
using namespace std;

int choice; // selection
double voltage, current, resistance; // Ohm's Law 
double kinetic_energy, mass, velocity; // kinetic energy
double force, acceleration; // mass is already declared

void computeOhm() {
    voltage = current * resistance; 
}

void computeKE() {
    kinetic_energy = 0.5 * mass * velocity * velocity; 
}

void computeForce() {
    force = mass * acceleration; 
}

void computeMenu() {
    cout << "\nThis program computes formulas for Ohm's Law, Kinetic Energy, and Force."; 
    cout << "\nPress 1 for Ohm's Law (Voltage), 2 for Kinetic Energy, and 3 for Force.";
    cout << "\nEnter your selection: "; 
    cin >> choice; 
    
    switch(choice) {
        case 1: {
            cout << "\nEnter the current: "; 
            cin >> current; 
            cout << "\nEnter the resistance: "; 
            cin >> resistance;
            computeOhm(); 
            cout << "The voltage is " << voltage << "." << endl; 
            break; 
        }
        case 2: {
            cout << "\nEnter the mass: "; 
            cin >> mass;
            cout << "\nEnter the velocity: "; 
            cin >> velocity; 
            computeKE(); 
            cout << "The kinetic energy is " << kinetic_energy << "." << endl; 
            break; 
        }
        case 3: {
            cout << "\nEnter the mass: "; 
            cin >> mass; 
            cout << "\nEnter the acceleration: "; 
            cin >> acceleration; 
            computeForce(); 
            cout << "The force applied is " << force << endl; 
            break; 
        }
        default: {
            cout << "\nInvalid value."; 
            break; 
        }
    }
}

int main () {
    for (int i = 0; i<=6; i++) {
        computeMenu(); 
        if (choice >= 1 && choice <= 3) {
            break;
        } else {
            cout << "\nYou have " << (6-i) << " attempts left," << endl; 
        }
    }

    cout << "\nToo many invalid attempts. Program Terminating."; 
    return 0; 
}
