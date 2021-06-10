/*
 * File:   main.cpp
 * Author: Jose Temblador
 * Created on February 6, 2021, 5:44 PM
 * Purpose:  Project 1
 * 
 */

//System Libraries
#include <iostream>  //I/O Library
#include <cstdlib>
#include <iomanip>
#include <cmath>                    //Added strings, a float, and organized this 
using namespace std;                //top portion

int main(int argc, char** argv) {
    //Initialize the Random Number Seed
    srand(static_cast<unsigned int>(time(0)));
    //Declare Variables
    bool ace;               //Tells computer if player has an Ace card
    string  name,           //User's name
            winner,         //Winner of game
            dlrnm="Dealer"; //Dealer's name 
    char choice;            //Decision of player if they wish to Hit
    float bet;              //Amount bet
    unsigned int hand=0,    //Sum of player's hand
                 dealer=0,  //Sum of Dealer's hand
                 card,      //Amount of card that was just drawn
                 a=0;       //Number of dealer
    unsigned int greeting=rand()%6+1;
    
    switch(greeting)    //Added custom greetings every time the program is run
    {
        case 1: cout<<"Welcome to Las Vegas!"<<endl<<endl;break;
        case 2: cout<<"Join us! There's plenty of "
                      "space at the tables."<<endl<<endl;break;
        case 3: cout<<"Back for more?"<<endl<<endl;break;
        case 4: cout<<"I was wondering when I was going to see you again!"<<endl<<endl;break;
        case 5: cout<<"Ready to win?"<<endl<<endl;break;
        default: 
        {
            cout<<"Come back tomorrow, looks like"
                  " you've had too much to drink."<<endl;
            return 0;
        }
    }
    
    cout<<"Welcome! What's your name?\n";
    cin>>name;
    cout<<"Welcome, "<<name<<"."<<endl<<    //Added an input so user can input name
          "We're playing Blackjack tonight. Please take a seat. "<<endl<<
          "At the end of the round the dealer will show you his hand.\n"<<endl;
    
    card=rand()%10+2;
    if (card==11)
    {
        cout<<"Your luck! Looks like you got an Ace.\n";
        ace=true;
    }
    hand+=card;
    cout<<"Your first card is "<<card<<".\n";
    
    card=rand()%10+2;
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
    cout<<"Your second card is "<<card<<"."<<endl;
    
    if (hand==21)
        cout<<"You got 21! Let's see what the dealer has.\n"<<endl;
    else    //Figured out the correct loop, changed 'F' to "just any other key"
    {       //added if 'h' will convert to 'H'
        cout<<"Your hand is currently at "<<hand<<"."<<endl;
        cout<<"\nWould you like to continue?\n"<<
              "Type 'H' to hit, or any other key to fold. "<<endl;
        cin>>choice;
        if (static_cast<int>(choice)==104) choice-=32;
            for (int a=0;(static_cast<int>(choice)==72)&&(hand<21);a++)
            {
                card=rand()%10+2;
                cout<<"Card is "<<card<<endl;
                if (card==11)
                {
                    if (ace==true)
                    {
                        cout<<"Looks like you've already got an Ace."<<endl<<
                              "Ace will count as 1 instead of 10.\n";
                        card-=10;
                    }
                    else if ((hand+card)>21)
                    {
                        cout<<"You don't have an Ace, but you will go over"<<
                        " if it's counted as 11. This one counts as 1."<<endl;
                        ace=true;
                        card-=10;
                    }
                    else 
                    {
                        cout<<"Your luck! Looks like you got an Ace.\n";
                        ace=true;    
                    }
                }
                hand+=card;         //Added this so user can loop if they 
                                    //wish to continue. Will break out of loop
                if (hand<21)        //if any other key than 'h' or 'H' is pressed
                {
                    cout<<"Your hand is "<<hand<<".\n"<<endl;
                    cout<<"Would you like to continue?\n"<<
                      "Type 'H' to hit, or any other key to fold. \n";
                    cin>>choice;
                    if (static_cast<int>(choice)==104) choice-=32;
                }
            }
                
    }
    
    cout<<"Your hand is currently "<<hand<<"."<<endl<<endl;
    cout<<"Dealer's turn: \n";
    do 
    {
        card=rand()%10+2;       //Added dealer turn
        dealer+=card;           //utilized many of the same parameters 
        if (card==11)           //from above
            if (dealer>21) {card-=10; dealer-=10;}
        a++;
        cout<<"Card "<<a<<" is "<<card<<". "<<dlrnm<<" is at "<<dealer<<"."<<endl;
    } while (dealer<=16);
    
    cout<<endl<<"Your hand is     "<<hand<<"."<<endl;       //Added display to 
    cout<<"Dealer's hand is "<<dealer<<"."<<endl<<endl;     //show who won
    
    if ((hand>21)&&(dealer>21)) cout<<"You and the dealer went over. Nobody wins!\n";
    else if (hand>21) cout<<"You went over, the Dealer wins!"<<endl;
    else if (dealer>21) cout<<"The Dealer went over, "<<name<<" wins!"<<endl;
    else
    {
        winner=(hand>dealer)?"Congrats, you won!":
               (dealer>hand)?"Dealer won":"Tie! Nobody won.";
        cout<<winner<<endl;
    }
    
    //Exit the Program - Cleanup
    return 0;
}