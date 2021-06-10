/* 
 * File:   main.cpp
 * Author: YOUR NAME HERE
 * Created on DATE AND TIME HERE
 * Purpose:  Infinite Series
 */

//System Libraries Here
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    float x,fx,term;
    int nterms;
    
    //Input or initialize values Here
    cout<<"Calculate a series f(x)=x-x^3/3!+x^5/5!-x^7/7!+......."<<endl;
    cout<<"Input x and the number of terms, output f(x)"<<endl;
    cin>>x>>nterms;
    
    //Calculate Sequence sum here
    fx=x;
    if (nterms>1)
    {
            for (int i=2, k=-1; i<=nterms; k*=-1)
        {
            term=((x*x)/(i*(i+1)))*k;
            fx+=term;
            i++;
        }
    }
    
    //Output the result here
    cout<<fixed<<setprecision(6)<<showpoint;
    cout<<fx<<endl;
    
    //Exit
    return 0;
}