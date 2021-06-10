/* 
 * File:   main.cpp
 * Author: Jose Temblador
 * Created on February 3, 2021, 6:25 PM
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
    unsigned char choice;
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
    if (card==11)
    {
        cout<<"Your luck! Looks like you got an Ace.\n";
        ace=true;
    }
    hand+=card;
    cout<<"Your first card is "<<card<<"."<<endl;
    
    card=rand()%11+2;
    if (card==11)
    {
        if (ace==true)
        {
            cout<<"Looks like you've already got an Ace."<<endl<<
                  "We'll subtract 10 from your score.\n";
            card-=10;
        }
        else {
            cout<<"Your luck! Looks like you got an Ace.\n";
            ace=true;    
        }
    }
    
    hand+=card;
    cout<<"Your second card is "<<card<<"."<<endl;  //Created this do-while loop
    cout<<"Your hand is currently at "<<hand<<".\n";//to continuously ask the same 
                                                    //question until user inputs 
    do {                                            //an 'H' (Hit) which will
        cout<<"Would you like to continue?\n"<<     //continue to run the program
              "Type 'H' to hit, or 'F' to fold. \n";//and go on to add cards to
        cin>>choice;                                //their hand
        choice=(choice=='h')?choice-32:
               (choice=='f')?choice-32:'A';
        
        int times=1;
        cout<<"repeated "<<times<<" times.\n";
        ++times;
    } while (choice=='A');    
    
    
    /* for loop reserved for dealer's hand */
    
    
    
    //Exit the Program - Cleanup
    return 0;
}