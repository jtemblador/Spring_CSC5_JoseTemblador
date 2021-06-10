/* 
 * File:   main.cpp
 * Author:
 * Created on:
 * Purpose:  Binary Search
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <cstdlib>   //Random Functions
#include <ctime>     //Time Library
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes
void fillAry(int [],int);
void prntAry(int [],int,int);
void bublSrt(int [],int);
bool binSrch(int [],int,int,int&);

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare Variables
    const int SIZE=100;
    int array[SIZE];
    int indx=0,val;
    
    //Initialize or input i.e. set variable values
    fillAry(array,SIZE);

    //Sorted List
    bublSrt(array,SIZE);
    
    //Display the outputs
    prntAry(array,SIZE,10);
    cout<<endl;
    cout<<"Input the value to find in the array"<<endl;
    cin>>val;
    if(binSrch(array,SIZE,val,indx))
        cout<<val<<" was found at indx = "<<indx<<endl;

    //Exit stage right or left!
    return 0;
}

void fillAry(int array[],int SIZE) {
    for (int i=0; i<SIZE; i++)
    cin>>array[i];
}

void prntAry(int array[],int SIZE,int num) {
    for(int i=0; i<SIZE; i++){
        cout<<array[i]<<" ";
        if(i%10==(10-1))cout<<endl;
    }
}

void bublSrt(int array[],int SIZE) {
    bool swap;
    do{
        swap=false;
        for(int i=0;i<SIZE-1;i++){  //Loop to swap with first in List
            if(array[i]>array[i+1]){       //Put the smallest at top of List
                array[i]=array[i]^array[i+1];  //In place Swap
                array[i+1]=array[i]^array[i+1];  //In place Swap
                array[i]=array[i]^array[i+1];  //In place Swap
                swap=true;
            }
        }
    }while(swap);
}

bool binSrch(int array[],int SIZE,int val,int &indx) {
    for (int i=0; i<SIZE; i++)
    {
        if (array[i]==val) return true;
        else indx++;
    }
}