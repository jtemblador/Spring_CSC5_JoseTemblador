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
    //Initialize the Random Number Seed
    const int size=10;
    int num[size];
    int min, max;
    //Declare Variables
    
    //Initialize Variables
    cout<<"Enter 10 integers:"<<endl;
    for(int a=0;a<size;a++)
        cin>>num[a];
    
    max=num[0];
    for(int a=1; a<size; a++)
        if (num[a]>max)
            max=num[a];
    
    min=num[0];
    for(int a=1; a<size; a++)
        if (num[a]<min)
            min=num[a];
    
    //Map Inputs to Outputs -> Process
    
    //Display Inputs/Outputs
    cout<<max<<" is the highest number."<<endl;
    cout<<min<<" is the lowest number.";
    //Exit the Program - Cleanup
    return 0;
}