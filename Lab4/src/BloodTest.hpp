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
	string name;
	char gender;
	string condition;
	string Bloodtype;
	int age;
public:
    BloodTest(); //User is asked to add the patients name
    void Startup(); //The rest of the patients info is inputed
    void DisplayAllBloodInfo();	//Displays all of the Blood information of the patient
};


class BloodCount : public BloodTest{
	double Rcellspermicroliter; //Red blood cells spermicroliter
	double Wcellspermicroliter; //White blood cells spermicroliter
	double Pcellspermicroliter; //Platelets cells spermicroliter
	double Hgramsperdeciliter;  //Hemoglobin spermicroliter
public:
    BloodCount(); //Displays the Gender of the patient which is inputed in the base class
    void InitializeBloodInfo();	//User inputs all of the values of the above variables
    void CheckRanges();	//Checks if the values fit in the normal ranges or not
};


class BloodGlucose : public BloodTest{    //BloodGLucose
	double Gmilligramsperdeciliter;
public:
	BloodGlucose(); //User inputs the Plasma Glucose Results (mg/dL)
	void Diagnosis();	//Based on the input their condition is returned
	void AbnormalResults(); //If values don't fit in range it is shown with a comment
};							//what this abnormal value means to the patients health
							//(ie. critical)



class Lipoprotein : public BloodTest{ //Lipoprotein
	double TotalLgramsperdeciliter;
	double GoodLgramsperdeciliter;
	double BadLgramsperdeciliter;
public:
    Lipoprotein();	//user inputs the Total Cholesterol Level (in mg/dL)
    void TGBCholestrolLevels();	//User inputs the good and bad Cholesterol levels (in mg/dL)
    void CheckTotalLevel();	//Checks the Total Cholestrol level and returns the Total Cholesterol Category
    void CheckGoodCholestrolLevel();//Checks the LDL Cholesterol Level and returns the LDL Cholesterol Category
    void CheckBadCholestrolLevel();//Checks the HDL Cholesterol Level and returns the HDL Cholesterol Category
};


#endif /* BLOODTEST_HPP_ */
