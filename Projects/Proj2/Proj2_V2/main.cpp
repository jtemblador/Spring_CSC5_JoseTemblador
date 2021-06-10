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
void HorF (string [], string [], int&, int, bool, unsigned int);
bool checkAce (unsigned char &, bool , unsigned int &);
unsigned char rndmNum(unsigned char); 
void dlrHnd (string [], string [], int, bool);


//Execution Begins Here
int main(int argc, char** argv) {
    //Initialize the Random Number Seed
    srand(static_cast<unsigned int>(time(0)));
    //Declare Variables
    const unsigned char nCards=52; 
    unsigned char rawnum=0;
    unsigned int hand=0;
    string allcards[nCards];
    string cards[nCards];
    string dlr[nCards];
    int cardnum=1;
    bool ace=false;
    
    //Initialize Variables
    fstream input;
    string  cardIn;
    string  fileName;

    fileName="card.dat";
    input.open(fileName.c_str(),ios::in);
    for (int i=1; i<=nCards; i++) {
        input>>cardIn;          //file is read in and assigns 
        allcards[i]=cardIn;     //all cards to array allcards
    }
    cout<<allcards[0]<<endl;
    input.close();
    
    unsigned int grtng=rand()%6+1;
    
    
    do {
        rawnum=rndmNum(nCards);                 //gets a random card number
        cards[cardnum]=allcards[rawnum];        //assigns random card from card set to player hand
        rawnum=rawnum%13;       //Mods card number by 13 to give it a value
        
        ace=checkAce(rawnum, ace, hand);    //Checks to see if player has ace
        
        if (rawnum==0||rawnum==11||rawnum==12||rawnum==13) //Face cards equal 10
            hand+=10; 
        else if (rawnum==14)   //first ace card is worth 11
            hand+=11;
        else hand+=rawnum;  //every other card is assigned its number value
        
        cout<<"Card number "<<cardnum<<" is  "<<cards[cardnum]<<endl<<
              "Your hand is    "<<setw(3)<<hand<<endl<<endl;
        cardnum++;
    } while (cardnum<=2);
    
    
    if (hand==21)
        cout<<"Looks like your hand is already at 21\n"
              "Lets see what the dealer has.\n";
        else HorF(cards, allcards, cardnum, nCards, ace, hand);
    
    ace=false;
    dlrHnd (dlr, allcards, nCards, ace);

    
    //Map Inputs to Outputs -> Process
    
    //Display Inputs/Outputs
    
    //Exit the Program - Cleanup
    input.close();
    return 0;
}

unsigned char rndmNum(unsigned char nCards) {
    return rand()%nCards+1;
}


void HorF(string cards[], string allcards[], int &cardnum, int nCards, bool ace, unsigned int hand) {
    unsigned char decide;
    unsigned char rawnum=0;
    cout<<"Would you like to hit or fold?"<<endl<<
          "Type H to hit or any other key to fold"<<endl;
        cin>>decide;
        cout<<endl;
        if (static_cast<int>(decide)=='h')  decide-=32;
        
        for (cardnum=3;decide=='H'&&hand<21;cardnum++)  //Only repeats if decision is hit or
    {                                                   //hand is below 21
        rawnum=rndmNum(nCards);                 //gets a random card number
        cards[cardnum]=allcards[rawnum];        //assigns random card from card set to player hand
        rawnum=rawnum%13;       //Mods card number by 13 to give it a value
        
        ace=checkAce(rawnum, ace, hand);    //Checks to see if player has ace
        
        if (rawnum==0||rawnum==11||rawnum==12||rawnum==13) //Face cards equal 10
            hand+=10; 
        else if (rawnum==14)   //first ace card is worth 11
            hand+=11;
        else hand+=rawnum;  //every other card is assigned its number value
        
        cout<<"Card number "<<cardnum<<" is  "<<cards[cardnum]<<endl<<
              "Your hand is    "<<setw(3)<<hand<<endl<<endl;
        
        if (hand<21)
        {               //Asks player to hit or fold
            cout<<"Would you like to hit or fold?"<<endl<<
                  "Type H to hit or any other key to fold"<<endl;
            cin>>decide;
            if (static_cast<int>(decide)=='h')  decide-=32;
        }
    }
}

bool checkAce (unsigned char &rawnum, bool ace, unsigned int &hand) {
    if (rawnum==1)
    {
        if (ace==true)
        {  //player can only have 1 ace card worth 11, every other ace card after is worth 1
            cout<<"Looks like you already have an ace card.\n"
                  "This card will be worth 1.\n";
            return true;
        }
        else if ((hand+rawnum+10)>21)
        {   //if hand goes over 21, ace is worth 1
            cout<<"You don't have an Ace, but you will go over"<<
            " if it's counted as 11. This one counts as 1."<<endl;
            return false;
        }
        else 
        {   //if first ace and hand is under 21, ace is worth 11
            cout<<"Your luck! Looks like you got an Ace.\n";
            rawnum=14;
            return true;
        }
    }
}

void dlrHnd (string dlr[], string allcards[], int nCards, bool ace) {
    unsigned int dlrhand=0, cardnum=1;
    unsigned char rawnum=0;
        while (dlrhand<=16)                     //while loop to get Dealer's hand
    {                      
        rawnum=rndmNum(nCards);                 //gets a random card number
        dlr[cardnum]=allcards[rawnum];        //assigns random card from card set to player hand
        rawnum=rawnum%13;       //Mods card number by 13 to give it a value
        dlrhand+=rawnum;      //Once dealer reaches 16 or greater, loop ends
        
        ace=checkAce(rawnum, ace, dlrhand);    //Checks to see if player has ace
        
        if (rawnum==0||rawnum==11||rawnum==12||rawnum==13) //Face cards equal 10
            dlrhand+=10; 
        else if (rawnum==14)   //first ace card is worth 11
            dlrhand+=11;
        else dlrhand+=rawnum;  //every other card is assigned its number value
        
        cout<<"Card "<<cardnum<<" is     "<<dlr[cardnum]<<".\n";
        cout<<"Dealer is at "<<setw(2)<<dlrhand<<".\n";
        cardnum++;
    } 
}