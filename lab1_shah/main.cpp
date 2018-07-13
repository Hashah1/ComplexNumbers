//
//  main.cpp
//  lab1_shah
//
//  Created by Mian Hashim Shah on 9/4/17.
//  Copyright © 2017 Mian Hashim Shah. All rights reserved.
//
#include "complex.h"
#include <iostream>
#include <fstream>

using namespace std;

//operator overload for << in order to display output to screen
ostream & operator << (ostream & outputStream , const complex & displayMyObj)
{
    if ( displayMyObj.getImaginary() >= 0)
    {
        return outputStream << displayMyObj.getReal() << '+' << displayMyObj.getImaginary() << "i\n"; //so instead of -3+-3i we get only -3+3i:: simple code for display
    }
    return outputStream << displayMyObj.getReal() << displayMyObj.getImaginary() << "i\n";
}

//fileIO method deals with parsing, populating object, adding and then piping into the output file
void fileIO()
{
    ifstream myFile("complex.txt"); //read in file
    ofstream myOutputFile("complexObj.txt"); //output file
    
    //variables to store file contents from each line
    int real , imaginary;
    char operand , i;
    
    //open file
    if( myFile.is_open() )//check if file is open
    {
        complex counterObj(0,0); //counter object
        
        //to read file until we have something to store in a variable;store everything in respective variables
        while ( myFile >> real >> operand >>  imaginary >> i )
        {
            //if the imaginary number has a '-' CHAR before it, multiply it by -1
            if (operand == '-')
            {
                imaginary *= -1;
            }
            
            complex complexObj1 (real , imaginary); //created object with real and imag values passed in
            myOutputFile << complexObj1; //display comoplex objects to an output file
            
            //add the complex objects
            counterObj = complexObj1 + counterObj;
        }
        
        //append to the end of the file
        myOutputFile << "------------";
        myOutputFile << "\nSum: " << counterObj ; //print out the sum
        myOutputFile << "------------\n";
        
        //close file
        myFile.close();
    }
    else{
        cout << "invalid file name!\n" ;
    }
}

//simple main function which only calls the fileIO method to do its job
int main()
{
    fileIO();
    return 0;
}




