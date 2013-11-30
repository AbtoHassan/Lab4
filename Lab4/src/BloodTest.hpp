/*
 * BloodTest.hpp
 *
 *  Created on: Nov 19, 2013
 *      Author: HP
 */

#ifndef BLOODTEST_HPP_
#define BLOODTEST_HPP_

#include <iostream>
#include <sstream>
#include <string>

using namespace std;

class BloodTest{    //Base Class
protected:
	string name; //Common variables shared by all classes
	char gender;	//General information needed to be displayed
	string condition;
	string bloodtype;
	int age;
public:
    BloodTest(); //User is asked to add information about the patients
    void annotation(); //The user can Input comments about a patients test
};


class BloodCount : public BloodTest{	//Derived Class 1
	double Rcellspermicroliter; //Red blood cells spermicroliter
	double Wcellspermicroliter; //White blood cells spermicroliter
	double Pcellspermicroliter; //Platelets cells spermicroliter
	double Hgramsperdeciliter;  //Hemoglobin spermicroliter
public:
	BloodCount();//User inputs the variables above
    void CheckRanges();	//Checks if the values fit in the normal ranges or not
    void DisplayBloodCount();	//Displays all of the Blood Count information of the patient
};


class BloodGlucose : public BloodTest{    //Derived Class 2
	double Gmilligramsperdeciliter;
	string Status;
public:
	BloodGlucose(); //User inputs the Plasma Glucose Results (mg/dL)
	void Diagnosis();	//Based on the input their Status is returned as a string (ie.Diabetes)
	void AbnormalResults(); //If values don't fit in range it is shown with a comment
						//what this abnormal value means to the patients health
							//(ie. critical)
	void DisplayBloodGlucose();//Displays all of the Blood Glucose information
};


class Lipoprotein : public BloodTest{	//Derived Class 3
	double TotalLgramsperdeciliter;
	double GoodLgramsperdeciliter;
	double BadLgramsperdeciliter;
public:
    Lipoprotein();	//User inputs the total/good/bad Cholesterol levels (in mg/dL)
    void CheckTotalLevel();	//Checks the Total Cholestrol level and returns the Total Cholesterol Category
    void CheckGoodCholestrolLevel();//Checks the LDL Cholesterol Level and returns the LDL Cholesterol Category
    void CheckBadCholestrolLevel();//Checks the HDL Cholesterol Level then returns the HDL Cholesterol Category
    void DisplayLipoprotein();	//Displays all of the Lipoprotein information of the patient
};


#endif /* BLOODTEST_HPP_ */
