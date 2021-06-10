/* 
 * File:   main.cpp
 * Author:
 * Created:
 * Purpose:  Reverse the Array
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

//Function Prototypes
void  init(int [],int);//Initialize the array
void  print(int [],int,int);//Print the array
void  revrse(int [],int);//Reverse the array


//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    srand(static_cast<unsigned>(time(0)));
    
    //Declare Variables
    const int SIZE=50;
    int test[SIZE];
    
    //Initialize or input i.e. set variable values
    init(test,SIZE);
    
    //Display the outputs
    
    
    //Reverse the Values
    revrse(test,SIZE);
    
    //Display the outputs
    print(test,SIZE,10);

    //Exit stage right or left!
    return 0;
}

void init(int test[],int SIZE) {
    for(int i=0; i<SIZE; i++)
    {
        cin>>test[i];
    }
}

void print (int test[],int SIZE,int num) {
    for(int i=0; i<SIZE; i++)
    {
        int count=0;
        cout<<test[i]<<" ";
        count++;
        if (i%num==9)
        {
            cout<<endl;
            count=0;
        }   
    }
}

void revrse(int test[],int SIZE) {
    for (int i=0; i<SIZE/2; i++)
    {
        int temp=test[SIZE-i-1];
        test[SIZE-i-1]=test[i];
        test[i]=temp;
    }
}