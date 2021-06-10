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
    float n1, n2, n3, n4, n5, n6, n7, n8, n9, n10,    //Integers
        sumPos=0, sumNeg=0;                             //Sum of Pos/Neg
    //Initialize or input i.e. set variable values
    
    //Map inputs -> outputs
    
    //Display the outputs
    cout<<"Input 10 numbers, any order, positive or negative\n";
    cin>>n1>>n2>>n3>>n4>>n5>>n6>>n7>>n8>>n9>>n10;
    
    
    n1>0?
        sumPos+=n1:
        sumNeg+=n1;
    
    n2>0?
        sumPos+=n2:
        sumNeg+=n2;
    
    n3>0?
        sumPos+=n3:
        sumNeg+=n3;
    
    n4>0?
        sumPos+=n4:
        sumNeg+=n4;
    
    n5>0?
        sumPos+=n5:
        sumNeg+=n5;
    
    n6>0?
        sumPos+=n6:
        sumNeg+=n6;
    
    n7>0?
        sumPos+=n7:
        sumNeg+=n7;
    
    n8>0?
        sumPos+=n8:
        sumNeg+=n8;
    
    n9>0?
        sumPos+=n9:
        sumNeg+=n9;
    
    n10>0?
        sumPos+=n10:
        sumNeg+=n10;
    

    cout<<"Negative sum ="<<setw(4)<<sumNeg<<endl;
    cout<<"Positive sum ="<<setw(4)<<sumPos<<endl;
    cout<<"Total sum    ="<<setw(4)<<sumPos+sumNeg;
    
    //Exit stage right or left!
    return 0;
}