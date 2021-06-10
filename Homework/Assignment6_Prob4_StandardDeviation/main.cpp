/* 
 * File:   main.cpp
 * Author:
 * Created on:
 * Purpose:
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <cstdlib>   //Srand
#include <ctime>     //Time to set random number seed
#include <cmath>     //Math Library
#include <iomanip>   //Format Library
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...
const float MAXRAND=pow(2,31)-1;

//Function Prototypes
void  init(float [],int);//Initialize the array
void  print(float [],int,int);//Print the array
float avgX(float [],int);//Calculate the Average
float stdX(float [],int);//Calculate the standard deviation

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    srand(static_cast<unsigned>(time(0)));
    
    //Declare Variables
    const int SIZE=20;
    float test[SIZE];
    
    //Initialize or input i.e. set variable values
    init(test,SIZE);
    
    //Display the outputs
    print(test,SIZE,5);
    cout<<"The average            = "<<fixed<<setprecision(7)<<avgX(test,SIZE)<<endl;
    cout<<"The standard deviation = "<<setprecision(7)<<stdX(test,SIZE)<<endl;

    //Exit stage right or left!
    return 0;
}

void  init(float test[],int SIZE) {
    for (int i=0; i<SIZE; i++)
    {
        cin>>test[i];
    }
}

void  print(float tes[],int SIZE,int num) {
    
}

float avgX(float test[],int SIZE) {
    float avg=0;
    for (int i=0; i<SIZE; i++)
    {
        avg+=test[i];
        if (i==SIZE-1) avg/=static_cast<float>(SIZE);
    }
    return avg;
}

float stdX(float test[],int SIZE) {
    float batman=0;
    float avg=0;
    for (int i=0; i<SIZE; i++)
    {
        avg+=test[i];
        if (i==SIZE-1) avg/=static_cast<float>(SIZE);
    }
    
    for (int i=0; i<SIZE; i++)
    {
        batman+=pow(abs((test[i]-avg)), 2.0);
    }
    batman=sqrt(batman/static_cast<float>(SIZE-1));
    return batman;
}