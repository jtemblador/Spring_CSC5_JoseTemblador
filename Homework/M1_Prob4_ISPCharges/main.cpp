/* 
 * File:   main.cpp
 * Author: YOUR NAME HERE
 * Created on DATE AND TIME HERE
 * Purpose:  ISP charges
 */

//System Libraries Here
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    char package;
    unsigned short hours;
    float val;
    
    //Input or initialize values Here
    cout<<"ISP charges for service delivered."<<endl;
    cout<<"Input package A,B,C then hours used for the month"<<endl;
    cin>>package>>hours;
    
    //Basic Charges
    
    switch (package)
    {
        case 'A':
        case 'a':
            if (hours<=10)
            {
                val=16.99;
                cout<<"$16.99";
            }    
            else 
            {
                static_cast<int>(hours)<=30?
                    val=16.99+(0.95*(hours-10)):
                    val=16.99+(0.95*20)+(0.85*(hours-30));
                    cout<<"$"<<val;
            }
            break;
        case 'B':
        case 'b':
            if (hours<=10)
            {
                val=26.99;
                cout<<"$26.99";
            }
            else 
            {
                static_cast<int>(hours)<=50?
                    val=26.99+(0.74*(hours-20)):
                    val=26.99+(0.74*30)+(0.64*(hours-50));
                    cout<<"$"<<val;
            }
            break;
        case 'C':
        case 'c':
            val=36.99;
            cout<<"$36.99";
            break;
    }
    
    //Output the Charge
    
    if ((hours<=22)&&(hours>=0))
        cout<<" A ";
    else 
        if ((hours>=23)&&(hours<=33)) 
            cout<<" B ";
        else  
            cout<<" C ";
         
    //Output the cheapest package and the savings
    
    if ((hours<=22)&&(hours>=0))
    {
        if (hours<=10)
            cout<<"$"<<val-16.99<<endl;
        else 
        {
            static_cast<int>(hours)<=30?
                cout<<"$"<<val-(16.99+(0.95*(hours-10)))<<endl:
                cout<<"$"<<val-(16.99+(0.95*20)+(0.85*(hours-30)))<<endl;
        }
    }
    else 
        if ((hours>=23)&&(hours<=33)) 
        {
            if (hours<=10)
                cout<<"$"<<val-26.99<<endl;
            else 
            {
                static_cast<int>(hours)<=50?
                    cout<<"$"<<val-(26.99+(0.74*(hours-20))):
                    cout<<"$"<<val-(26.99+(0.74*30)+(0.64*(hours-50)));
            }
        }
        else  
            cout<<"$"<<val-36.99<<endl;
        
    //Exit
    return 0;
}