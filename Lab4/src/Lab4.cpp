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

//Uncommented the Test Functions

	BloodCount testbc;
	BloodGlucose testbg;
	Lipoprotein testl;


	testbc.InitializeBloodInfo();
	//testbc.CheckRanges();


	testbg.BloodSugarValues();
	testbg.Diagnosis();
	//testbg.AbnormalResults();


	testl.TGBCholestrolLevels();
	//testl.CheckTotalLevel();
	//testl.CheckGoodCholestrolLevel();
	//testl.CheckBadCholestrolLevel();



}
