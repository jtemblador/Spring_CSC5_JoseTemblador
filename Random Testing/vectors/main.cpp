/* 
 * File:   main.cpp
 * Author: Dr Mark E. Lehr
 * Purpose:  Statistics for Throwing 2 Dice
 */

//System Libraries
#include <iostream>  //I/O Library
#include <cstdlib>   //Random number Library
#include <ctime>     //Time Library
#include <vector>
using namespace std;

//User Libraries

//Global Constants - Math/Physics Constants, Conversions,
//                   2-D Array Dimensions

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Seed the random number function    
    vector<string> hand(10);
    
    for (int i=0; i<10; i++)
        hand[i]=(i+1);
    
    int i=0;
    do {
        cout<<hand[i]<<endl;
        i++;
    } while (i<17);
    
    //Declare Variables
    
    //Initialize Variables
    
    
    //Process/Map inputs to outputs
    
    
    //Output data
    
    
    //Exit stage right!
    return 0;
}
