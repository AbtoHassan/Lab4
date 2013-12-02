/*
 * Bloodtesting2.cpp
 *
 *  Created on: Nov 28, 2013
 *      Author: HP
 */
#include <iostream>
#include <sstream>
#include <string>
#include "BloodTest.hpp"

using namespace std;

//TEST 2 (Checks if the two func in the blood Glucose class work together to take a value
//		  and display it
BloodGlucose::BloodGlucose()
{
	cout << "Please input the Plasma Glucose Results (mg/dL): " <<endl;
	cin >> Gmilligramsperdeciliter;
	DisplayBloodGlucose();
}

void BloodGlucose::DisplayBloodGlucose()
{
	cout << condition<<endl;
	cout << bloodtype<<endl;
	cout << Gmilligramsperdeciliter<<endl;
	cout << "AND SO ON.......!!!!!!"<<endl;
	cout << "==============================================="<<endl;
		//Reasks the information here because this is only a test and nothing has been
		//added to the program beyond here :)

}


