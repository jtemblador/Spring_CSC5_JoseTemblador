/* 
 * File:   main.cpp
 * Author: YOUR NAME HERE
 * Created on DATE AND TIME HERE
 * Purpose:  Histogram
 */

//System Libraries Here
#include <iostream>
#include <fstream>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here

    unsigned char a, b, c, d;
    
    //Input or initialize values Here
    cout<<"Create a histogram chart."<<endl;
    cout<<"Input 4 digits as characters."<<endl;

    cin>>a>>b>>c>>d;
    
   
    //Histogram Here

    if (static_cast<int>(d-48)<=9?true:false) {
        cout<<static_cast<int>(d-48)<<" ";
            for (int i=1;i<=d-48;i++)
                cout<<"*";
        cout<<endl;
    }
    else {
        cout<<d<<" ?"<<endl;
    }
    
    if (static_cast<int>(c-48)<=9?true:false) {
        cout<<static_cast<int>(c-48)<<" ";
            for (int i=1;i<=c-48;i++)
                cout<<"*";
        cout<<endl;
    }
    else {
        cout<<c<<" ?"<<endl;
    }
    
    if (static_cast<int>(b-48)<=9?true:false) {
        cout<<static_cast<int>(b-48)<<" ";
            for (int i=1;i<=b-48;i++)
                cout<<"*";
        cout<<endl;
    }
    else {
        cout<<b<<" ?"<<endl;
    }
    
    
    if (static_cast<int>(a-48)<=9?true:false) {
        cout<<static_cast<int>(a-48)<<" ";
            for (int i=1;i<=a-48;i++)
                cout<<"*";
        cout<<endl;
    }
    else {
        cout<<a<<" ?"<<endl;
    }
    
    
    
    
    //Exit
    return 0;
}