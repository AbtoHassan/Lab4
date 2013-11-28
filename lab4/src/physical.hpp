/*
 * physical.hpp
 *
 *  Created on: Nov 26, 2013
 *      Author: Gurjap
 */

#ifndef PHYSICAL_HPP_
#define PHYSICAL_HPP_
#include <iostream>
#include<string>
#include<sstream>

using namespace std;

class physical{
protected:
	int bednum;
	string firstname;
	string lastname;

public:
	physical();
	void start(); //prompts user to insert patient info
	void displayinfo();// displays all physical test data
};

class vitals : public physical {
public:
	vitals();
	int heartrate();//gets the heart rate of the patient
	int temp();// gets the temperature of the patient
	int respitory();// gets the breathing rate of the patient
};

class bloodpress : public physical{
protected:
	int diastolic;
	int systolic;
public:
	bloodpress();
	int syspress();//gets the patients systolic blood pressure
	int diaspress();// gets the patients diastolic blood pressure
	void bloodpressresult();// gives the result weather normal or abnormal
};

class test : public physical{
protected:
	int testcolor;
public:
	test();
	void urinetestcolor();//allows the user to enter the color of the urine test result
	void urineresult();//gives the condition related to the color entered
	void swabresult();//tells user if any bacterial culture is shown from the swab test

};

#endif /* PHYSICAL_HPP_ */
