//============================================================================
// Name        : Lab4.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <sstream>
#include <string>
#include "BloodTest.hpp"

using namespace std;

int main() {

//Uncommented the Test Functions and Commented out the unused functions

	//BloodCount testbc; //Objects used for test (comment/ uncomment for test)
	BloodGlucose testbg; //Objects used for test (comment/ uncomment for test)
	//Lipoprotein testl;  CREATING AN OBJECT FOR THE Lipoprotein CLASS


	//testbc.DisplayBloodCount();     //TEST 1 (RUN bloodtesting.cpp)
	testbg.DisplayBloodGlucose();	//TEST 2 (RUN bloodtesting1.cpp)


	//Lipoprotein functions called with objects for class (DON'T USE FOR TESTS)
	//testl.Lipoprotein();
	//testl.CheckTotalLevel();
	//testl.CheckGoodCholestrolLevel();
	//testl.CheckBadCholestrolLevel();

}
