/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on January 4, 2021, 10:50 AM
 * Purpose:  CPP Template 
 *           To be copied for each Assignment Problem
 */

//System Libraries
#include <iostream>  //I/O Library
#include <cstdlib>   //Random number generator
#include <iomanip>   //Formats output
#include <cmath>     //Math library
#include <ctime>     //Time Library 
#include <string>    //String Library
#include <fstream>   //File Input/Output Library
using namespace std;

//User Libraries

//Global Constants
//Math, Science, Universal, Conversions, High Dimensioned Arrays

//Function Prototypes
void HorF (string [], string [], int&, int);

//Execution Begins Here
int main(int argc, char** argv) {
    //Initialize the Random Number Seed
    srand(static_cast<unsigned int>(time(0)));
    //Declare Variables
    unsigned char nCards=52;
    string allcards[nCards];
    string cards[nCards];
    int cardnum=2;
    bool ace=false;
    
    //Initialize Variables
    fstream input;
    string  cardIn;
    string  fileName;

    fileName="card.dat";
    input.open(fileName.c_str(),ios::in);
    for (int i=1; i<=nCards; i++) {
        input>>cardIn;
        allcards[i]=cardIn;
    }
    cout<<allcards[50]<<endl;
    input.close();
    
    HorF(cards, allcards, cardnum, nCards);
    //Map Inputs to Outputs -> Process
    
    //Display Inputs/Outputs
    
    //Exit the Program - Cleanup
    input.close();
    return 0;
}

void HorF(string cards[], string allcards[], int &cardnum, int nCards) {
    unsigned char decide;
    unsigned char rawnum=0;
    unsigned int hand=0;
    cout<<"Would you like to hit or fold?"<<endl<<
          "Type H to hit or any other key to fold"<<endl;
        cin>>decide;
        if (static_cast<int>(decide)=='h')  decide-=32;
        for (cardnum=3;decide=='H'&&hand<21;cardnum++)
    {
        rawnum=rand()%nCards+1;
        cards[cardnum]=allcards[rawnum];
        rawnum=rawnum%13;
        
        
        if (rawnum==0) rawnum=13;
        hand+=rawnum;
        cout<<"Card number "<<cardnum<<" is  "<<cards[cardnum]<<endl<<
              "Your hand is    "<<setw(3)<<hand<<endl<<endl;
        
        if (hand<21)
        {
            cout<<"Would you like to hit or fold?"<<endl<<
                  "Type H to hit or any other key to fold"<<endl;
            cin>>decide;
            if (static_cast<int>(decide)=='h')  decide-=32;
        }
        
    } 
}