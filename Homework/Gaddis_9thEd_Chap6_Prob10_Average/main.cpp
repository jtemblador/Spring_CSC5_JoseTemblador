/* 
 * File:   
 * Author: 
 * Created on 
 * Purpose:  C++ Template
 */

//System Libraries
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

//Global Constants only
const int PERCENT=100;
//Math, Physics, Conversions, Higher Order Dimension 

//Function Prototypes

float psntVal(float,float,int);

//Execution Begins Here
int main(int argc, char** argv) {
    //Initialize the Random Number Seed
    
    //Declare Variables
    float   f,  //future Value
            i,  //interest rate 
            p;  //Present value
            
    int     y;  //compounding years
    //Initialize Variables
    cout<<"This is a Present Value Computation\n";
    cout<<"Input the Future Value in Dollars\n";
    cin>>f;
    cout<<"Input the Number of Years\n";
    cin>>y;
    cout<<"Input the Interest Rate %/yr\n";
    cin>>i;
    //Map Inputs to Outputs -> Process
    p=psntVal(f, i/PERCENT, y);
    
    //Display Inputs/Outputs
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"The Present Value = $"<<p;

    //Exit the Program - Cleanup
    return 0;
}

float psntVal(float f,float i,int y) {
    return f/pow(1+i, y);
}