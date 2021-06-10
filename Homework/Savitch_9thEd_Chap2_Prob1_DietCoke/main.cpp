/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on January 2, 2019, 12:36 PM
 * Purpose:  Creation of Template to be used for all
 *           future projects
 */

//System Libraries
#include <iostream>  //Input/Output Library
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    
    //Declare Variables
    int     cans,               //number of cans before death
            mse,                //mouse weight in grams
            artsw,              //amount that kills mouse in grams
            cnsda;              //can of soda in grams
            
    float   wght,               //person's weight in grams
            cnctn;              //concentration of sodaartificial sweetener in soda
    const float cnvgr=453.592;   //conversion of pounds to grams
            
    //Initialize or input i.e. set variable values
    mse=35;
    artsw=5;
    cnsda=350;
    cnctn=0.001;
    
    //Display the outputs
    cout<<"Program to calculate the limit of Soda Pop Consumption.\n";
    cout<<"Input the desired dieters weight in lbs.\n";
    cin>>wght;
    
    cans=(wght*cnvgr*artsw)/(mse*cnsda*cnctn);
    
    cout<<"The maximum number of soda pop cans\n";
    cout<<"which can be consumed is "<<cans<<" cans";
    
    //Exit stage right or left!
    return 0;
}