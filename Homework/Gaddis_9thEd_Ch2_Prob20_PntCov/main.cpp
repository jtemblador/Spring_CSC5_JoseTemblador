/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on January 5, 2021, 10:27 AM
 * Purpose:  Painters Problem
 */

//System Libraries
#include <iostream>  //I/O Library
using namespace std;

//User Libraries

//Global Constants
//Math, Science, Universal, Conversions, High Dimensioned Arrays

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Initialize the Random Number Seed
    
    //Declare Variables
    unsigned short hgt,    //Height of Fence in Feet
                   lngth,  //Length of Fence in Feet
                   pntCv,  //Paint Coverage / can in Ft^2
                   srfAr,  //Surface Area to Paint in Ft^2
                   numGlns;//Number of Gallons of Paint
    
    //Initialize Variables
    hgt=6;
    lngth=100;
    pntCv=340;
    
    //Map Inputs to Outputs -> Process
    srfAr=2*2*hgt*lngth;//Paint twice front and back of the Fence
    numGlns=srfAr/pntCv+1;
    
    //Display Inputs/Outputs
    cout<<"Number of Gallons required = "<<numGlns<<" to paint a ";
    cout<<hgt<<" x "<<lngth<<" ft^2 fence front and back twice!"<<endl;
    
    //Exit the Program - Cleanup
    return 0;
}