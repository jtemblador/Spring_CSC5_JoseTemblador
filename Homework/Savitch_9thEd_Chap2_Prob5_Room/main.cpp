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
    int ppl, //People allowed in room
        cap; //Capacity limit
    
    //Map inputs -> outputs
    
    //Display the outputs
    cout<<"Input the maximum room capacity and the number of people\n";
    cin>>cap>>ppl;
    
    cap>ppl?
            cout<<"Meeting can be held.\n"
                  "Increase number of people by "<<(cap-ppl)<<" will be allowed without violation.":
                  
            cout<<"Meeting cannot be held.\n"
                  "Reduce number of people by "<<(ppl-cap)<<" to avoid fire violation.";
        
    //Exit stage right or left!
    return 0;
}