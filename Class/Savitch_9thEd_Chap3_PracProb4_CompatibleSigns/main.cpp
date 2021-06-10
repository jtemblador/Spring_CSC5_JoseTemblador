/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on January 2, 2019, 12:36 PM
 * Purpose:  Creation of Template to be used for all
 *           future projects
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <string>
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    string a, b;    //Signs
    //Initialize or input i.e. set variable values
    cout<<"Horoscope Program which examines compatible signs.\n";
    cout<<"Input 2 signs.\n";
    cin>>a>>b;
    //Map inputs -> outputs
    if(a=="Aries"||a=="Leo"||a=="Sagittarius")
    {
        if(b=="Aries"||b=="Leo"||b=="Sagittarius")
            cout<<a<<" and "<<b<< " are compatible Fire signs.";
        else
            cout<<a<<" and "<<b<< " are not compatible signs.";
    }
    
    if(a=="Taurus"||a=="Virgo"||a=="Capricorn")
    {
        if(b=="Taurus"||b=="Virgo"||b=="Capricorn")
            cout<<a<<" and "<<b<< " are compatible Earth signs.";
        else
            cout<<a<<" and "<<b<< " are not compatible signs.";
    }
    
    if(a=="Gemini"||a=="Libra"||a=="Aquarius")
    {
        if(b=="Gemini"||b=="Libra"||b=="Aquarius")
            cout<<a<<" and "<<b<< " are compatible Air signs.";
        else
            cout<<a<<" and "<<b<< " are not compatible signs.";
    }
    
    if(a=="Pisces"||a=="Cancer"||a=="Scorpio")
    {
        if(b=="Pisces"||b=="Cancer"||b=="Scorpio")
            cout<<a<<" and "<<b<< " are compatible Water signs.";
        else
            cout<<a<<" and "<<b<< " are not compatible signs.";
    }
    
    //Display the outputs
    
    
    //Exit stage right or left!
    return 0;
}