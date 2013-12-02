/*
 * BaseConstructor.cpp
 *
 *  Created on: Nov 28, 2013
 *      Author: HP
 */

#include <iostream>
#include <sstream>
#include <string>
#include "BloodTest.hpp"

using namespace std;

BloodTest::BloodTest() //Constructor function
{
	cout << "Please Input the Patients full name: " <<endl;
	cin >> name;
	cout << "Enter the Patients Gender ('m' for male 'f' for female): " <<endl;
	cin >> gender;
	cout << "Please Input the Patients condition: " <<endl;
	cin >> condition;
	cout << "Please Input the Patients Bloodtype: " <<endl;
	cin >> bloodtype;
	cout << "Please Input the Patients age: " <<endl;
	cin >> age;
}
