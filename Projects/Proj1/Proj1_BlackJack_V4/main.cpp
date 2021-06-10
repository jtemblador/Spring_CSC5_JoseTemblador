/* 
 * File:   main.cpp
 * Author: Jose Temblador
 * Created on February 4, 2021, 11:14 PM
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
    
    card=rand()%10+2;
    if (card==11)
    {
        cout<<"Your luck! Looks like you got an Ace.\n";
        ace=true;
    }
    hand+=card;
    cout<<"Your first card is "<<card<<"."<<endl;
    
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
    cout<<"Your hand is currently at "<<hand<<".\n";
    
    if (hand==21)
        cout<<"You got 21! Let's see what the dealer has."<<endl;
    else 
    {
        for (choice='H';((choice=='H')&&(hand<21));)      //Unsure how to break out of loop
        {                                                 //when an 'F' is unputted.
                                                          //May need to rework this
            for (int a=0;((choice=='H')&&(hand<21));a++)  //entire loop since it doesnt 
            {                                             //seem to be working at all
                cout<<"Would you like to continue?"<<endl 
                     <<"Type 'H' to hit, or 'F' to fold. \n";
                cin>>choice;
                if (choice=='h') choice-=32;
                if (choice=='f') choice-=32;
                for (int a=0;a<1;a++)
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
                    hand+=card;
                    cout<<"Your hand is "<<hand<<endl;
                }
            }  
        }
    }
            
    /*     
    for(bool a=false;a==true; )
    {
        
    }       //Tried to create the main loop with a do-while loop instead 
    */      //of a for loop. This didn't work initially so 
            //I may not come back to it
    /*
    if (hand==21)
        cout<<"You got 21! Let's see what the dealer has."<<endl;
    else {
        cout<<"Would you like to continue?\n"<<
              "Type 'H' to hit, or 'F' to fold. \n";
        cin>>choice;
        if (choice=='h') choice-=32;
        if (choice=='f') choice-=32;
        if ((choice=='H')&&(hand<21))
        {
            do 
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
                hand+=card;
                cout<<"Your hand is "<<hand<<endl;
            }
            while ((choice=='H')&&(hand<21)); 
            
        } else
            cout<<"You folded with "<<hand<<endl;
    }
     */
    
    cout<<hand<<endl;
    
    /* for loop reserved for dealer's hand */
    
    
    
    //Exit the Program - Cleanup
    return 0;
}