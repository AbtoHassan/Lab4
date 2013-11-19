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
    int t;
    char gender;
    char celltype;
    double CellAmount;
    double volume;
    double Result;
public:
    BloodTest();
    void Startup();
    void cellspervolume();

};


class BloodGlucose : class BloodTest{

public:
    BloodGlucose();
    void initialize();
    void Diagnosis();



};



class Electro : class BloodTest{    //Electrolytes

public:
    Electro();
    void LowFLuid();
    void LowMinerals();
    void Stabalizing();

};


class Lipopro : class BloodTest{ //Lipoprotein

public:
    Lipopro();
    void CholestrolLevels();
};





#endif /* BLOODTEST_HPP_ */
