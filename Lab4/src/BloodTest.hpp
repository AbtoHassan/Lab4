/*
 * BloodTest.hpp
 *
 *  Created on: Nov 19, 2013
 *      Author: HP
 */

#ifndef BLOODTEST_HPP_
#define BLOODTEST_HPP_

class BloodTest{    //Base Class
protected:
	char choice;
public:
    BloodTest();
    void Startup();
    void DisplayAllBloodInfo();
};


class BloodCount : public BloodTest{
	char gender;
	double Rcellspermicroliter;
	double Wcellspermicroliter;
	double Pcellspermicroliter;
	double Hgramsperdeciliter;
public:
    BloodCount();
    void InitializeBloodInfo();
    void CheckInfo();
};



class Electrolytes : public BloodTest{    //Electrolytes
	double Egramsperdeciliter;
public:
	Electrolytes();
    void LowFLuid();
    void LowMinerals();
    void Stabalizing();
};


class Lipoprotein : public BloodTest{ //Lipoprotein
	double TotalLgramsperdeciliter;
	double GoodLgramsperdeciliter;
	double BadLgramsperdeciliter;
public:
    Lipoprotein();
    void TGBCholestrolLevels();
    void CheckTotalLevel();
    void CheckGoodCholestrolLevel();
    void CheckBadCholestrolLevel();
};





#endif /* BLOODTEST_HPP_ */
