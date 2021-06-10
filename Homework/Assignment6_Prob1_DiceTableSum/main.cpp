/* 
 * File:   main.cpp
 * Author: 
 * Created:
 * Purpose:  
 * 
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <iomanip>   //Format Library
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...
const int COLS=6;
const int ROWS=6;
//Function Prototypes
void fillTbl(      int [][COLS],int);
void prntTbl(const int [][COLS],int);

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    const int ROWS=6;
    int tablSum[ROWS][COLS];
    
    //Initialize or input i.e. set variable values
    fillTbl(tablSum,ROWS);
    
    //Display the outputs
    prntTbl(tablSum,ROWS);

    //Exit stage right or left!
    return 0;
}

void fillTbl(int tablSum[][COLS],int ROWS) {

    for(int i=0; i<=ROWS; i++)
    {
        tablSum[i][0]=i;
        for(int j=0; j<=COLS; j++)
        {
            tablSum[i][j]=j+i;
        }
    }
    
}

void prntTbl(const int tablSum[][COLS],int ROWS) {
    cout<<"Think of this as the Sum of Dice Table\n";
    cout<<"           C o l u m n s\n";
    cout<<"     |";
    
    for (int i=1; i<=ROWS; i++) {
    cout<<setw(4)<<tablSum[i][0];
    }
    cout<<endl;
    cout<<"----------------------------------\n";
    
    for (int i=1; i<=ROWS; i++)
    {
        if (i==1) cout<<"   ";
        if (i==2) cout<<"R  ";
        if (i==3) cout<<"O  ";
        if (i==4) cout<<"W  ";
        if (i==5) cout<<"S  ";
        if (i==6) cout<<"   ";
        cout<<tablSum[i][0]<<" |";
        
        for(int j=1; j<=COLS; j++)
        {
            cout<<setw(4)<<i+j;
        }
        cout<<endl;
    }
}