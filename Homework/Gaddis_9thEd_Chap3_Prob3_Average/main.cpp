/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on January 2, 2019, 12:36 PM
 * Purpose:  Creation of Template to be used for all
 *           future projects
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    float num1, num2, num3, num4, num5, avg; //Numbers to average, the average of the numbers
    
    //Display the outputs
    cout<<"Input 5 numbers to average."<<endl;
    cin>>num1>>num2>>num3>>num4>>num5;
    avg=(num1+num2+num3+num4+num5)/5;
    cout<<setprecision(1)<<fixed;
    cout<<"The average = "<<avg;
    //Exit stage right or left!
    return 0;
}