/*
 * Author: Jose Temblador
 * Date: 3/14/2021
 * Purpose: prob 4, code-e assignment
 */

//System Libraries - Post Here
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries - Post Here

//Global Constants - Post Here
//Only Universal Physics/Math/Conversions found here
//No Global Variables
//Higher Dimension arrays requiring definition prior to prototype only.

//Function Prototypes - Post Here

//Execution Begins Here
int main(int argc, char** argv) {
    //Set random number seed here when needed
    
    //Declare variables or constants here
    //7 characters or less
    float in1, in2, in3, in4;
    //Initialize or input data here
    
    //Display initial conditions, headings here
    cin>>in1>>in2>>in3>>in4;
    //Process inputs  - map to outputs here
    
    //Format and display outputs here
    cout<<setw(9)<<setprecision(0)<<in1;
    cout<<setw(10)<<setprecision(1)<<fixed<<in1;
    cout<<setw(10)<<setprecision(2)<<fixed<<in1<<endl;
    
    cout<<setw(9)<<setprecision(0)<<in2;
    cout<<setw(10)<<setprecision(1)<<fixed<<in2;
    cout<<setw(10)<<setprecision(2)<<fixed<<in2<<endl;
    
    cout<<setw(9)<<setprecision(0)<<in3;
    cout<<setw(10)<<setprecision(1)<<fixed<<in3;
    cout<<setw(10)<<setprecision(2)<<fixed<<in3<<endl;
    
    cout<<setw(9)<<setprecision(0)<<in4;
    cout<<setw(10)<<setprecision(1)<<fixed<<in4;
    cout<<setw(10)<<setprecision(2)<<fixed<<in4;
    
    //Clean up allocated memory here
    
    //Exit stage left
    return 0;
}