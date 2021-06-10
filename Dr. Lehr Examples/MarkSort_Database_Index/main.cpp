/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on June 1st, 2021, 11:00 AM
 * Purpose:  Mark Sort Database Index
 */

//System Libraries
#include <iostream>  //I/O Library
#include <cstdlib>   //Random Function
#include <ctime>     //Setting the Random Number Seed
using namespace std;

//User Libraries

//Global Constants
//Math, Science, Universal, Conversions, High Dimensioned Arrays
void fillAry(int [],int [],int);
void prntAry(int [],int,int);
void prntAry(int [],int [],int,int);
void markSrt(int [],int [],int);

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Initialize the Random Number Seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare Variables Static Array
    const int SIZE=100;//Size of the Array
    int array[SIZE];   //Array
    int index[SIZE];   //Array
    
    //Initialize Variables
    fillAry(array,index,SIZE);
    cout<<"Array before Sorting"<<endl;
    prntAry(array,SIZE,10);
    cout<<"Index before Sorting"<<endl;
    prntAry(index,SIZE,10);
    cout<<"Array using the index before Sorting"<<endl;
    prntAry(array,index,SIZE,10);
    
    //Map Inputs to Outputs -> Process
    markSrt(array,index,SIZE);
    
    //Display Inputs/Outputs
    cout<<"Array after Sorting"<<endl;
    prntAry(array,SIZE,10);
    cout<<"Index after Sorting"<<endl;
    prntAry(index,SIZE,10);
    cout<<"Array using the index after Sorting"<<endl;
    prntAry(array,index,SIZE,10);
    
    //Exit the Program - Cleanup
    return 0;
}

void markSrt(int a[],int indx[],int n){
    for(int i=0;i<n-1;i++){      //Loop for each position in List
        for(int j=i+1;j<n;j++){  //Loop to swap with first in List
            if(a[indx[i]]>a[indx[j]]){       //Put the smallest at top of List
                indx[i]=indx[i]^indx[j];  //In place Swap
                indx[j]=indx[i]^indx[j];  //In place Swap
                indx[i]=indx[i]^indx[j];  //In place Swap
            }
        }
    }
}

void prntAry(int a[],int indx[],int n,int perLine){
    cout<<endl;
    for(int i=0;i<n;i++){
        cout<<a[indx[i]]<<" ";
        if(i%perLine==(perLine-1))cout<<endl;
    }
    cout<<endl;
}

void prntAry(int a[],int n,int perLine){
    cout<<endl;
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
        if(i%perLine==(perLine-1))cout<<endl;
    }
    cout<<endl;
}

void fillAry(int a[],int indx[],int n){
    for(int i=0;i<n;i++){
        a[i]=rand()%90+10;//[10,99]
        indx[i]=i;
    }
}