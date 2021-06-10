/* 
 * File:   main.cpp
 * Author: Jose Tembaldor
 * Created on May 13, 2021, 10:50 AM
 * Purpose:  Assignment 5, Problem 9
 */

//System Libraries
#include <iostream>  //I/O Library
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants
//Math, Science, Universal, Conversions, High Dimensioned Arrays

//Function Prototypes
void  getScre(int &,int &,int &,int &,int &);
float calcAvg(int,int,int,int,int);
int   fndLwst(int,int,int,int,int);

//Execution Begins Here
int main(int argc, char** argv) {
    //Initialize the Random Number Seed
    
    //Declare Variables
    int n1, n2, n3, n4, n5;
    //Display Inputs/Outputs
    getScre(n1, n2, n3, n4, n5);
    //Exit the Program - Cleanup
    return 0;
}

void getScre(int &n1,int &n2,int &n3,int &n4,int &n5) {
    cout<<"Find the Average of Test Scores\n";
    cout<<"by removing the lowest value.\n";
    cout<<"Input the 5 test scores.\n";
    cin>>n1>>n2>>n3>>n4>>n5;
    cout<<setprecision(1)<<fixed<<showpoint;
    cout<<"The average test score = "<<calcAvg(n1,n2,n3,n4,n5);
}

float calcAvg(int n1,int n2,int n3,int n4,int n5) {
    return (n1+n2+n3+n4+n5-fndLwst(n1,n2,n3,n4,n5))/4;
}

int fndLwst(int n1,int n2,int n3,int n4,int n5) {
    int low=n1;
    if (n2<low) low = n2;
    if (n3<low) low = n3;
    if (n4<low) low = n4;
    if (n5<low) low = n5;
    
    return low;
}