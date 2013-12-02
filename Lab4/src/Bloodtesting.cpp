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

//TEST 1 (Checks if the variables are passed to the derived class)
BloodCount::BloodCount()
{
	cout << "Please Input the number of Red blood cells in spermicroliter: " <<endl;
	cin >> Rcellspermicroliter;
	cout << "Please Input the number of White blood cells in spermicroliter: " << endl;
	cin >> Wcellspermicroliter;
	cout << "Please Input the number of Platelets cells in spermicroliter: " <<endl;
	cin >> Pcellspermicroliter;
	cout << "Please Input the number of Hemoglobin cells in grams per deciliter: " <<endl;
	cin >> Hgramsperdeciliter;	//TESTING BLOOD COUNT DERIVED CLASS
	DisplayBloodCount(); 	//Display info collected
}

void BloodCount::DisplayBloodCount()
{
	cout << name<<endl;
	cout << gender<<endl;
	cout << Rcellspermicroliter<<endl;
	cout << "BLAH BLAH BLAH"<<endl;
	cout << "==============================================="<<endl;
	//Reasks the information here because this is only a test and nothing has been
	//added to the program beyond here :)
}


