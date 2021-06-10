/* 
 * Author: 
 * Created on 
 * Purpose:  
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants - Math/Physics Constants, Conversions,
//                   2-D Array Dimensions

//Function Prototypes
int fctrl(int);//Function to write for this problem

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    int a=0,      //Factorial nubmer
        num=1;    //Result
        
    //Initialize Variables
    cout<<"This program calculates the factorial using a function prototype found in the template for this problem.\n";
    cout<<"Input the number for the function.\n";
    cin>>a;
    
    //Process/Map inputs to outputs
    if (a>=1) num=fctrl(a);
    
    //Output data
    cout<<a<<"! = "<<num;
    
    //Exit stage right!
    return 0;
}

int fctrl(int num) {
    
    for(int i=num; i > 1; i--)
    num*=i-1;
    
    return num;
}