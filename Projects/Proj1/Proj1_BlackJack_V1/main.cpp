/*
 * File:   main.cpp
 * Author: Jose Temblador
 * Created on February 1, 2021, 3:18 PM
 * Purpose:  Project 1
 * 
 */

//System Libraries
#include <iostream>  //I/O Library
#include <cstdlib>
using namespace std;

//User Libraries

//Global Constants
//Math, Science, Universal, Conversions, High Dimensioned Arrays

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Initialize the Random Number Seed
    srand(static_cast<unsigned int>(time(0)));
    //Declare Variables
    bool ace;
    unsigned int hand=0, dealer=0, card;
    unsigned int greeting=rand()%6+1;
    
    switch(greeting)
    {
        case 1: cout<<"1Welcome to Las Vegas!"<<endl<<endl;break;
        case 2: cout<<"2Welcome to Las Vegas"<<endl<<endl;break;
        case 3: cout<<"3Welcome to Las Vegas"<<endl<<endl;break;
        case 4: cout<<"4Welcome to Las Vegas"<<endl<<endl;break;
        case 5: cout<<"5Welcome to Las Vegas"<<endl<<endl;break;
        default: 
        {
            cout<<"Come back tomorrow, looks like"
                  " you've had too much to drink."<<endl;
            return 0;
        }
    }
    
    cout<<"We're playing Blackjack tonight. Please take a seat. "<<endl<<
          "At the end of the round the dealer will show you his hand.\n"<<endl;
    
    card=rand()%11+2;
    hand+=card;
    cout<<"Your first card is "<<card<<"."<<endl;
    hand+=card;
    cout<<"Your second card is "<<card<<"."<<endl;
    
    cout<<"Your hand is currently at "<<hand<<".\n";
    
    
    
    //Exit the Program - Cleanup
    return 0;
}