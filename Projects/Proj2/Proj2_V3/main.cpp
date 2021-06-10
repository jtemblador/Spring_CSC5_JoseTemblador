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
void HorF (string [], string [], int &, int, bool, unsigned int, int []);
bool checkAce (unsigned char &, bool , unsigned int &); //Player check ace function
bool checkAce (unsigned char &, bool , int &);      //Dealer checkAce function 
unsigned char rndmNum(unsigned char); 
void dlrHnd (string [], string [], int , bool, int &, unsigned char=0);

//Execution Begins Here
int main(int argc, char** argv) {
    //Initialize the Random Number Seed
    srand(static_cast<unsigned int>(time(0)));
    //Declare Variables
    const unsigned char nCards=52; 
    unsigned char rawnum=0;
    int cardnum1=1,
        cardnum2=1,
        crdnms[10];
    unsigned int bet,
                 hand=0;
    string allcards[nCards];
    string cards[nCards];
    string name;
    string dlr[nCards];
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
    
    switch(grtng)      //Random greeting at the start of every game
    {
        case 1: cout<<"Welcome to Las Vegas!"<<endl<<endl;break;
        case 2: cout<<"Join us! There's plenty of "
                      "space at the tables."<<endl<<endl;break;
        case 3: cout<<"Back for more?"<<endl<<endl;break;
        case 4: cout<<"I was wondering when I was going to see you again!"<<endl<<endl;break;
        case 5: cout<<"Ready to win?"<<endl<<endl;break;
        default: 
        {
            cout<<"You should come back tomorrow, looks like"  
                  " you've had too much to drink."<<endl;
            exit(0);
        }               //Added exit function
    }
    
    cout<<"Welcome! What's your name?\n";       
    cin>>name;
    cout<<"Welcome, "<<name<<"."<<endl<<
          "We're playing Blackjack tonight. Please take a seat. "<<endl<<
          "At the end of the round the dealer will show you his hand.\n"<<endl;
    cout<<"Place your bet! Cents are allowed.\n"
          "This high stakes Blackjack. All bets are squared by itself.\n";
    cin>>bet;
    
    do {
        rawnum=rndmNum(nCards);             //gets a random card number
        crdnms[cardnum1]=rawnum;            //Raw Card number is put into an array (players hand)
        cards[cardnum1]=allcards[rawnum];   //assigns random card from card set to player hand
        rawnum=rawnum%13;       //Mods card number by 13 to give it a value
        
        ace=checkAce(rawnum, ace, hand);    //Checks to see if player has ace
        
        if (rawnum==0||rawnum==11||rawnum==12||rawnum==13) //Face cards equal 10
            hand+=10; 
        else if (rawnum==14)   //first ace card is worth 11
            hand+=11;
        else hand+=rawnum;  //every other card is assigned its number value
        
        cout<<"Card number "<<cardnum1<<" is  "<<cards[cardnum1]<<endl<<
              "Your hand is    "<<setw(3)<<hand<<endl<<endl;
        cardnum1++;
    } while (cardnum1<=2);
    
    
    if (hand==21)
        cout<<"Looks like your hand is already at 21\n"
              "Lets see what the dealer has.\n";
        else HorF(cards, allcards, cardnum1, nCards, ace, hand, crdnms);
    
    ace=false;
    dlrHnd (dlr, allcards, nCards, ace, cardnum2);
    
    
    
    //Map Inputs to Outputs -> Process
    
    //Display Inputs/Outputs
    
    //Exit the Program - Cleanup
    input.close();
    return 0;
}

unsigned char rndmNum(unsigned char nCards) {
    return rand()%nCards+1;
}

void HorF(string cards[], string allcards[], int &cardnum1, int nCards, 
          bool ace, unsigned int hand, int crdnms[]) {
    unsigned char decide;
    unsigned char rawnum=0;
    cout<<"Would you like to hit or fold?"<<endl<<
          "Type H to hit or any other key to fold"<<endl;
        cin>>decide;
        cout<<endl;
        if (static_cast<int>(decide)=='h')  decide-=32;
        
        for (cardnum1=3;decide=='H'&&hand<21;cardnum1++)  //Only repeats if decision is hit or
    {                                                   //hand is below 21
        rawnum=rndmNum(nCards);             //gets a random card number
        crdnms[cardnum1]=rawnum;            //Raw Card number is put into an array (players hand)
        cards[cardnum1]=allcards[rawnum];   //assigns random card from card set to player hand
        rawnum=rawnum%13;       //Mods card number by 13 to give it a value
        
        ace=checkAce(rawnum, ace, hand);    //Checks to see if player has ace
        
        if (rawnum==0||rawnum==11||rawnum==12||rawnum==13) //Face cards equal 10
            hand+=10; 
        else if (rawnum==14)   //first ace card is worth 11
            hand+=11;
        else hand+=rawnum;  //every other card is assigned its number value
        
        cout<<"Card number "<<cardnum1<<" is  "<<cards[cardnum1]<<endl<<
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

bool checkAce (unsigned char &rawnum, bool ace, int &hand) {
    if (rawnum==1)
    {
        if (ace==true)
        {  //player can only have 1 ace card worth 11, every other ace card after is worth 1
            cout<<"Dealer already have an ace card.\n"
                  "This card will be worth 1.\n";
            return true;
        }
        else if ((hand+rawnum+10)>21)
        {   //if hand goes over 21, ace is worth 1
            cout<<"Dealer doesn't have an Ace, but he'll go over"<<
            " if it's counted as 11. This one counts as 1."<<endl;
            return false;
        }
        else 
        {   //if first ace and hand is under 21, ace is worth 11
            cout<<"Dealer got an Ace.\n";
            rawnum=14;
            return true;
        }
    }
}

void dlrHnd (string dlr[], string allcards[], int nCards, bool ace, int &cardnum2, unsigned char rawnum) {
    int dlrhand=0;
    
    cout<<"It is now the Dealers turn.\n"<<endl;
        while (dlrhand<=16)       //Once dealer reaches 16 or greater, loop ends
    {                      
        rawnum=rndmNum(nCards);                 //gets a random card number
        dlr[cardnum2]=allcards[rawnum];        //assigns random card from card set to player hand
        rawnum=rawnum%13;     //Mods card number by 13 to give it a value
        
        ace=checkAce(rawnum, ace, dlrhand);    //Checks to see if player has ace
        
        if (rawnum==0||rawnum==11||rawnum==12||rawnum==13) //Face cards equal 10
            dlrhand+=10;
        else if (rawnum==14)   //first ace card is worth 11
            dlrhand+=11;
        else dlrhand+=rawnum;  //every other card is assigned its number value
        
        cout<<"Card "<<cardnum2<<" is     "<<dlr[cardnum2]<<".\n";
        cout<<"Dealer is at "<<setw(2)<<dlrhand<<".\n"<<endl;
        cardnum2++;
    } 
}