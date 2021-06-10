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
    
    int profit,  //profit of circuit board
        cost;    //Cost to make circuit board
    
    cost=14.95;
    profit=0.35*cost;
    cout<<"Profit for circuit boards is 35%.\n"
        "If they cost $14.95 to make, they must be sold at $"<<profit+cost<<".\n";
    
    //Exit the Program - Cleanup
    return 0;
}