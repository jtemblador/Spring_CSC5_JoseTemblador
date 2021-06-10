/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on January 4, 2021, 10:50 AM
 * Purpose:  CPP Template 
 *           To be copied for each Assignment Problem
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
    
    int time;       //Time in freefall
        
    cout<<"This program determines the distance an object in freefall travels \n"
          "given an amount of time.\nPlease insert a time in seconds.\n";
    cin>>time;
    
    cout<<"After "<<time<<" seconds the distance traveled is "<<(9.81*time*time)/2<<" meters.";
    
    
    //Display Inputs/Outputs
    
    //Exit the Program - Cleanup
    return 0;
}