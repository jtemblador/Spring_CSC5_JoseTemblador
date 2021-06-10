/* 
 * Author: Jose Temblador
 * Created on 
 * Purpose: Assignment 5 Prob 1 Min Max
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants - Math/Physics Constants, Conversions,
//                   2-D Array Dimensions

//Function Prototypes
void minmax(int,int,int,int&,int&);//Function to find the min and max

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    int min, max;
    int v1, v2, v3;
    
    //Initialize Variables
    cout<<"Input 3 numbers"<<endl;
    cin>>v1>>v2>>v3;
    min = max = 9999;
    
    //Map Inputs to Outputs -> Process
    minmax (v1, v2, v3, min, max);
    
    //Display Inputs/Outputs
    cout<<"Min = "<<min<<endl;
    cout<<"Max = "<<max;
    //Exit stage right!
    return 0;
}

void minmax (int a, int b, int c, int& min, int& max) {
    
    min=max=a;
    
    if (b < min)
        min = b;
    else if (b>max) 
        max = b;
    
    if (c < min)
        min = c;
    else if (c>max) 
        max = c;
        
}