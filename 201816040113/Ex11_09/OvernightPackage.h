//OvernightPackage.h
#ifndef OVERNIGHTPACKAGE_H_INCLUDED
#define OVERNIGHTPACKAGE_H_INCLUDED
#include <iostream>
#include <stdexcept>
#include "Package.h"
using namespace std;

class OvernightPackage:public Package
{
public:
    OvernightPackage(const string & ,const string & ,const string &,const string & ,const string & ,
                     const string & ,const string & ,const string &,const string & ,const string & ,
                     double=0.0,double=0.0,double=0.0);
    double calculateCost();//calculateCost function for class OverNightPackage
    void print();//print function for class OverNightPackage
private:
    double extraFee;
};


#endif // OVERNIGHTPACKAGE_H_INCLUDED
