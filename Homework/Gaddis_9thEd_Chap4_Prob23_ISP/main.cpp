/* 
 * File:   
 * Author: 
 * Created on 
 * Purpose:  C++ Template
 */

//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;

//Global Constants only
//Math, Physics, Conversions, Higher Order Dimension 

//Function Prototypes


//Execution Begins Here
int main(int argc, char** argv) {
    //Set random number seed
    
    //Declare all variables
    char    choice; //Choice of A, B, or C
    int     hrs;
    
    //Initialize Variables
    cout<<"ISP Bill\n";
    cout<<"Input Package and Hours\n";
    cin>>choice>>hrs;
    
    cout<<setprecision(2)<<fixed;
    if (hrs>744) {
        cout<<"Hours used in a month cannot exceed 744!\n";
    }
    else switch (choice)
        {   
        case 'a':
        case 'A': hrs = hrs>10?(hrs-10):0;
                    cout<<"Bill = $ "<<(9.95+(2.00*hrs));
                    break;
                    
        case 'b':
        case 'B': hrs = hrs>20?(hrs-20):0;
                    cout<<"Bill = $ "<<(14.95+(1.00*hrs));
                    break;
            
        case 'c':
        case 'C': cout<<"Bill = $ "<<(19.95);
                    break; 
        default: cout<<"Please choose Plan A, Plan B, or Plan C.";
        }   
    
    //Display Outputs
    
    return 0;
}