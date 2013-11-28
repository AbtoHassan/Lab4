/*
 * Bloodtesting.cpp
 *
 *  Created on: Nov 26, 2013
 *      Author: HP
 */

#include <iostream>
#include <sstream>
#include <string>
#include "BloodTest.hpp"

using namespace std;

BloodTest::BloodTest()
{
	cout << "Please Input the Patients full name: " <<endl;
	cin >> name;
	cout << "Enter the Patients Gender ('m' for male 'f' for female): " << endl;
	cin >> gender;
	cout << "Please Input the Patients condition: " <<endl;
	cin >> condition;
	cout << "Please Input the Patients Bloodtype: " <<endl;
	cin >> bloodtype;
	cout << "Please Input the Patients age: " <<endl;
	cin >> age;
	cout << "What Test would you like to perform? (C = Count, G = Glucose, L = Lipoprotein): "<<endl;
	cin >> choice;
switch(choice)
	{
		case 'C':
		case 'c':
			//InitializeBloodInfo();
			break;
		case 'G':
		case 'g':
			//BloodSugarValues();
			break;
		case 'L':
		case 'l':
			//TGBCholestrolLevels();
			break;
	}
}

//TEST 1 (Checks if the variables are passed to the derived class)
void BloodCount::InitializeBloodInfo()
{
	cout << gender;
	cout << "gender Display WORKING!";	//TESTING BLOOD COUNT DERIVED CLASS
}

//TEST 2 (Checks if the two func in the blood Glucose class can work together to take a value
//		  and compute their condition/ status (ie. Diabetes, Normakm etc)
void BloodGlucose::BloodSugarValues()
{
	cout << "Please input the Plasma Glucose Results (mg/dL): " <<endl;
	cin >> Gmilligramsperdeciliter;
	Diagnosis();
}

void BloodGlucose::Diagnosis(){
Status = "Return Diagnosis";
cout << Status;
}

