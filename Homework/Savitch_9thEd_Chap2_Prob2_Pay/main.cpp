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
    const float rse=0.076; //Percentage of raise
          float   sal,     //Salary
                retpay,    //Retroactive pay
                monsal;    //Monthly Salary
        
    //Display the outputs
    cout<<"Input previous annual salary.\n";
    cin>>sal;
    retpay=(sal/2)*rse;
    sal+=sal*rse;
    monsal=sal/12;
    
    cout<<setprecision(2)<<fixed;
    cout<<left<<setw(19)<<"Retroactive pay"<<"= $"<<right<<setw(7)<<retpay<<endl;
    cout<<left<<setw(19)<<"New annual salary"<<"= $"<<right<<setw(7)<<sal<<endl;
    cout<<left<<setw(19)<<"New monthly salary "<<"= $"<<right<<setw(7)<<monsal;

    
    //Exit stage right or left!
    return 0;
}