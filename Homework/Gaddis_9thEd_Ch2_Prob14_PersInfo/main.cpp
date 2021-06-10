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
    
    string name, adrs, cty, st, maj;
    int zip, cellnum; 
    
    cout<<"Please enter your name.\n";
    cin>>name;
    
    cout<<"Please enter your address, city, state, and zip code.\n";
    cin>>adrs>>cty>>st>>zip;
    
    cout<<"Please enter your telephone number.\n";
    cin>>cellnum;
    
    cout<<"Please enter your college major.\n";
    cin>>maj;

    cout<<"Name: "<<name<<endl<<
          "Address "<<adrs<<" "<<cty<<", "<<st<<" "<<zip<<endl<<
          "Phone Number: "<<cellnum<<endl<<
          "College major is "<<maj<<endl;
    
    
    //Exit the Program - Cleanup
    return 0;
}