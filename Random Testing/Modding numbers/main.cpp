/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on January 4, 2021, 10:50 AM
 * Purpose:  CPP Template 
 *           To be copied for each Assignment Problem
 */

//System Libraries
#include <iostream>  //I/O Library
#include <ctime>
#include <cstdlib> 
using namespace std;

//User Libraries

//Global Constants
//Math, Science, Universal, Conversions, High Dimensioned Arrays

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    srand(static_cast<unsigned int>(time(0)));
    
    int a;
    a=rand()%52+1;
    cout<<a<<endl;
/*   while (a>13) {
        a=a%13;
        if (a==0) a=13;
        cout<<a<<endl;
    }
 */
    string array[5]={"Jose", "Jose", "Joseph"};
    cout<<array[1];
    return 0;
}