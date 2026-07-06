//
//  main.cpp
//  Lab_2
//
//  Created by Erik Petersen on 7/5/26.
//

#include <iostream>
using namespace std;

int main() {
    int age;
    double height;

    cout << " Ride Eligibility Checker" << endl;
    cout << "Enter your age: ";
    cin >> age;

    cout << "Enter your height (in inches): ";
    cin >> height;

    if ((12 <= age) && (age <= 75) && ( 40 <=height ) && (height<=80))  {
        cout << "Congratulations! You are eligible to ride the roller coaster!" << endl;
    }
    else if (((75 < age) || (age < 12)) && (( 80 <height ) || (height<40))) {
        cout << "Sorry, you did not meet the height requirement or the age requirment." << endl;
    }
    else if  ((75 < age) || (age < 12)) {
        cout << "Sorry, you did not meet the age requirement, but are tall enough to ride." << endl;
    }
    else {
        cout << "Sorry, you do not meet the height requirement, but are old enough to ride." << endl;
    }

    return 0;
}
