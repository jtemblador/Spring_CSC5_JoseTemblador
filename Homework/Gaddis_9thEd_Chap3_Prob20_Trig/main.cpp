/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on January 2, 2019, 12:36 PM
 * Purpose:  Creation of Template to be used for all
 *           future projects
 */

//System Libraries
#include <iostream> //Input/Output Library
#include <cmath>
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
    const float cnvrad=(3.14159)/(180);  //Conversion to degrees 
    
    int ang;                             //angle inputted by user
    float newang;
    
    //Display the outputs
    cout<<"Calculate trig functions\n";
    cout<<"Input the angle in degrees.\n";
    cin>>ang;
    
    newang=ang*cnvrad;

    cout<<fixed<<showpoint<<setprecision(4);
    cout<<"sin("<<ang<<") ="<<setw(7)<<sin(newang)<<endl;
    cout<<"cos("<<ang<<") ="<<setw(7)<<cos(newang)<<endl;
    cout<<"tan("<<ang<<") ="<<setw(7)<<tan(newang);
    
    //Exit stage right or left!
    return 0;
}