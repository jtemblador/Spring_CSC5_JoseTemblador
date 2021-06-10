/* 
 * File:   main.cpp
 * Author: Jose Tembaldor
 * Created on May 13, 2021, 10:50 AM
 * Purpose:  Assignment 5, Problem 4
 */

//System Libraries
#include <iostream>  //I/O Library
using namespace std;

//User Libraries

//Global Constants
//Math, Science, Universal, Conversions, High Dimensioned Arrays

//Function Prototypes

bool inTime(int&, int&);
void cnvtTime(int, int, int&, int&, char&);
void prntTime(int, int, int , int , char);

//Execution Begins Here
int main(int argc, char** argv) {
    //Initialize the Random Number Seed
    int hr, min, outHr, outMin;
    char again, outAMPM;
    
    //Declare Variables
    cout<<"Military Time Converter to Standard Time\n";
    cout<<"Input Military Time hh:mm\n";
    
    do {
        bool good = inTime( hr, min);
        
        if (good) 
        {
            cnvtTime (hr, min, outHr, outMin, outAMPM);
            prntTime (hr, min, outHr, outMin, outAMPM);
        }
        
        cout<<"Would you like to convert another time (y/n)\n";
        cin>>again;
        
    } while (again=='y' || again=='Y');
    
    //Exit the Program - Cleanup
    return 0;
}

bool inTime(int &hr, int &min) {
    char dummy;
    
    cin>>hr>>dummy>>min;
    
    if ( hr < 0 || hr > 23 || min < 0 || min > 59)
    {
        if (hr < 10)  cout<<'0';
        cout<<hr<<':';
        if (min < 10) cout<<'0';
        cout<<min<<" is not a valid time"<<endl;
        
        return false;
        
    }
    return true;
}

void cnvtTime(int hr24, int min24, int &outHr, int &outMin, char &outAMPM) {
    if (hr24>=12) outAMPM='P';
    else outAMPM='A';
    
    outHr=hr24%12;
    if (outHr==0) outHr=12;
    
    outMin=min24;
    
}
void prntTime(int hr24, int min24, int outHr, int outMin, char outAMPM) {
    if (hr24<10)  cout<<'0';
    cout<<hr24<<":";
    if (min24<10) cout<<'0';
    cout<<min24<<" = ";
    
    cout<<outHr<<":";
    if (outMin<10) cout<<'0';
    cout<<outMin<<" ";
    cout<<((outAMPM=='a' || outAMPM=='A' ) ? "AM" : "PM");
    cout<<endl;
    
}