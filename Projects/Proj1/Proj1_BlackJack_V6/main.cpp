/* 
 * File:   main.cpp
 * Author: Jose Temblador
 * Created on February 7, 2021, 7:14 PM
 * Purpose:  Project 1
 * 
 */

//System Libraries
#include <iostream>  //I/O Library
#include <cstdlib>   //Random number generator
#include <iomanip>   //Formats output
#include <cmath>     //Math library
#include <ctime>     //Time Library 
using namespace std;                    //added the "bet" float to determine
                                        //how much the user wins
int main(int argc, char** argv) {
    //Initialize the Random Number Seed
    srand(static_cast<unsigned int>(time(0)));
    //Declare Variables
    bool    ace;            //Tells computer if player has an Ace card
    string  name,           //User's name
            winner,         //Winner of game
            dlrnm="Dealer"; //Dealer's name 
    char choice;            //Decision of player if they wish to Hit
    float bet;              //Amount bet
    unsigned int hand=0,    //Sum of player's hand
                 dealer=0,  //Sum of Dealer's hand
                 card,      //Amount of card that was just drawn
                 a=0;       //Number of cards dealer has
    unsigned int grtng=rand()%6+1;
    
    switch(grtng)      //Random greeting at the start of every game
    {
        case 1: cout<<"Welcome to Las Vegas!"<<endl<<endl;break;
        case 2: cout<<"Join us! There's plenty of "
                      "space at the tables."<<endl<<endl;break;
        case 3: cout<<"Back for more?"<<endl<<endl;break;
        case 4: cout<<"I was wondering when we would see you again!"<<endl<<endl;break;
        case 5: cout<<"Ready to win?"<<endl<<endl;break;
        default: 
        {
            cout<<"You should come back tomorrow, looks like"  //Ends game if user had too much to drink
                  " you've had too much to drink."<<endl;
            return 0;
        }
    }
    
    cout<<"Welcome! What's your name?\n";       //Asks for users name
    cin>>name;
    cout<<"Welcome, "<<name<<"."<<endl<<
          "We're playing Blackjack tonight. Please take a seat. "<<endl<<
          "At the end of the round the dealer will show you his hand.\n"<<endl;
    cout<<"Place your bet! Cents are allowed.\n"
          "This high stakes Blackjack. All bets are squared by itself.\n";
    cin>>bet;
    
    card=rand()%10+2;  //Start of game, draws two random cards between 2 and 11
    if (card==11)      //If card is an Ace, sets bool ace to true and card is counted as 11.
    {
        cout<<"Your luck! Looks like you got an Ace.\n";
        ace=true;
    }
    hand+=card;         //Card value added to player hand
    cout<<"Your first card is "<<card<<".\n";
    
    card=rand()%10+2;
    if (card==11)
    {              //If another Ace is drawn, subtracts 10 from 'new' Ace vale
        if (ace==true)  
        {
            cout<<"Looks like you've already got an Ace."<<endl<<
                  "We'll subtract 10 from your score.\n";
            card-=10;
        }
        else {         //If it's players first Ace, only sets ace bool to true
            cout<<"Your luck! Looks like you got an Ace.\n";
            ace=true;    
        }
    }
    
    hand+=card;         //Card value added to player hand
    cout<<"Your second card is "<<card<<"."<<endl;
    
    if (hand==21)       //If 21 then game skips to Dealers' turn
        cout<<"You got 21! Let's see what the dealer has.\n"<<endl;
    else 
    {    //Asks if user wishes to continue, if not skips to dealers turn
        cout<<"Your hand is currently at "<<hand<<"."<<endl;
        cout<<"\nWould you like to continue?\n"<<
              "Type 'H' to hit, or any other key to fold. "<<endl;
        cin>>choice;
                    //Validates user input
                    //If lowercase h, makes it uppercase
                    //If anything else, does not enter loop
        if (static_cast<int>(choice)==104) choice-=32;  
            for (int a=0;(static_cast<int>(choice)==72)&&(hand<21);a++)
           //Hand value must be less than 21 and user must have decided to 'Hit'
            {
                card=rand()%10+2;
                cout<<"Card is "<<card<<endl;
                if (card==11)
                {
                    if (ace==true)      //Decides if user already has an ace
                    {
                        cout<<"Looks like you've already got an Ace."<<endl<<
                              "Ace will count as 1 instead of 10.\n";
                        card-=10;
                    }
                    else if ((hand+card)>21)
                    {
                        //If user doesn't have an Ace but will go over 21
                        //Instead ace is counted as 1
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
                hand+=card; //Card value added to hand
                
                if (hand<21)
                {    //Asks if user wishes to continue, if so, loop is repeated
                    cout<<"Your hand is "<<hand<<".\n"<<endl;
                    cout<<"Would you like to continue?\n"<<
                      "Type 'H' to hit, or any other key to fold. \n";
                    cin>>choice;
                    if (static_cast<int>(choice)==104) choice-=32;
                       //CAN ONLY REPEAT IF HAND VALUE IS LESS THAN 21
                       //AND USER WISHES TO CONTINUE
                }
            }
                
    }
    
    cout<<"Your hand is currently "<<hand<<"."<<endl<<endl; //Displays users hand
    cout<<"Dealer's turn: \n";
    
    do                     //do while loop to get Dealer's hand
    {                      //Ace 'if' statement is repeated here
        card=rand()%10+2;  //Prints card count and Dealers value once every card is drawn
        dealer+=card;      //Once dealer reaches 16 or greater, loop ends
        if (card==11)
            if (dealer>21) {card-=10; dealer-=10;}
        a++;
        cout<<"Card "<<a<<" is "<<card<<". "<<dlrnm<<" is at "<<dealer<<"."<<endl;
    } while (dealer<=16);
    
    cout<<endl<<"Your hand is"<<setw(7)<<hand<<"."<<endl;   //Displays user and dealer hand
    cout<<"Dealer's hand is"<<setw(3)<<dealer<<"."<<endl<<endl;
    
            //If user and dealer hand is over 21, nobody wins
            //If user or dealer hand is over 21, opponent wins
            //If user and dealer below 21, both hands are compared and 
            //greatest hand is determined the winner
            //If user wins, displays amount won
            
    if ((hand>21)&&(dealer>21)) cout<<"You and the dealer went over. Nobody wins!\n";
    else if (hand>21) cout<<"You went over, the Dealer wins!"<<endl;
    else if (dealer>21) 
    {
        cout<<fixed<<setprecision(2);
        cout<<"The Dealer went over, "<<name<<" wins!"<<endl;
        cout<<"\nYou won "<<pow(bet, 2.0)<<"!";
    }
    else
    {       //Ternary operator to determine winner
        winner=(hand>dealer)?"Congrats, you won!":
               (dealer>hand)?"The Dealer won.":"Tie! Nobody won.";
        cout<<winner<<endl;
    }                                   //Added this last part that shows how
    if (winner=="Congrats, you won!")   //much you won after betting
    {                                   //in the beginning
        cout<<fixed<<setprecision(2);                           
        cout<<"The Dealer went over, "<<name<<" wins!"<<endl;
        cout<<"\nYou won "<<pow(bet, 2.0)<<"!";
    }
    
    return 0;
}