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
    int Nqrts,      //Number of quarters
        Ndms,       //Number of dimes
        Nnckls,     //Number of nickels
        sum=0;        //Sum of cents
    
    //Declare Variables
    cout<<"Please enter number of quarters, dimes, and nickels.\n";
    cin>>Nqrts>>Ndms>>Nnckls;
    
    sum=(sum+(Nqrts*25));
    sum=(sum+(Ndms*10));
    sum=(sum+(Nnckls*5));
    
    cout<<"Altogether you have "<<sum<<" cents.\n";
    
    
    //Exit the Program - Cleanup
    return 0;
}