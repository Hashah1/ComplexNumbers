//
//  class - complex.h
//  lab1_shah
//
//  Created by Mian Hashim Shah on 9/4/17.
//  Copyright © 2017 Mian Hashim Shah. All rights reserved.
//

#ifndef COMPLEX_H
#define COMPLEX_H

#include <iostream>
#include <string>

using namespace std;

class complex
{
public :

    complex (); //default constructor
    complex ( int real = 0, int imaginary = 1 ) : realNumber (real) , imaginaryNumber (imaginary) {}; //parameterized constructor
    
    //setters
    void setRealNumber (int realNum);
    void setImaginaryNumber (int imaginaryNum);
    
    //getters for real and imaginary numbers.
    inline int getReal () const
    {
        return realNumber;
    }
    
    inline int getImaginary () const
    {
        return imaginaryNumber;
    }

    //operator overload
    complex operator + (const complex & Rhs) const; //overload +
    
private :
    int realNumber , imaginaryNumber; // attributes for complex number
};

#endif



