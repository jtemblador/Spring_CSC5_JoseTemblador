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
    
    //Declare Variables
    float  hrs,    //hours worked
           rt,     //pay per hours
           ttlpay; //total pay
           
    float ovrTm=40;
    
    //Display the outputs
    cout<<"This program calculates the gross paycheck.\n";
    cout<<"Input the pay rate in $'s/hr and the number of hours.\n";
    cin>>rt>>hrs; 
    
    ttlpay=hrs>ovrTm? 
        (hrs*rt)+((hrs-ovrTm)*rt):
        hrs*rt;
    
    cout<<fixed<<setprecision(2)<<showpoint<<fixed;
    cout<<"Paycheck = $"<<setw(7)<<ttlpay;
    
    
    //Exit stage right or left!
    return 0;
}