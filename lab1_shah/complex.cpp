//
//  class - complex.cpp
//  lab1_shah
//
//  Created by Mian Hashim Shah on 9/4/17.
//  Copyright © 2017 Mian Hashim Shah. All rights reserved.
//
#include <iostream>
#include <fstream>
#include <vector>
#include "complex.h"
using namespace std;

//constructor
complex::complex ()
{
    imaginaryNumber = realNumber = 0;
}

void complex::setRealNumber (int realNum)
{
    realNumber = realNum;
}

void complex::setImaginaryNumber (int imaginaryNum)
{
    imaginaryNumber = imaginaryNum;
}

//overload the + operator
complex complex::operator + (const complex & rhs) const
{
    return complex(rhs.realNumber + realNumber, rhs.imaginaryNumber + imaginaryNumber);
}

