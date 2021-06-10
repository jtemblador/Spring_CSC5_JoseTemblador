/*
    Author: Dr. Mark E. Lehr
    Date:   April 1st, 2021  11:22am
    Purpose:Menu to be used with homework
 */

//System Libraries
#include <iostream>    //Input/Output Library
#include <iomanip>     //Format Library
using namespace std;   //Library Name-space

//User Libraries

//Global/Universal Constants -- No Global Variables
//Science, Math, Conversions, Higher Dimensioned constants only

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Set the Random number seed
    
    //Declare variables
    char choice,//To be used in the menu program program
         nProbs;//Max number of Problems
    
    //Initialize variables
    nProbs='4';
    
    //Process, map inputs to outputs
    do{
        //Menu, List of problems
        cout<<"Type 0 for Problem Gaddis Chap 4 Prob 1 "<<endl;
        cout<<"Type 1 for Problem Gaddis Chap 4 Prob 10"<<endl;
        cout<<"Type 2 for Problem Gaddis Chap 4 Prob 15"<<endl;
        cout<<"Type 3 for Problem Gaddis Chap 4 Prob 20"<<endl;
        cin>>choice;
        
        //Problems solved
        switch(choice){
            case '0':{
                cout<<"Put Solution to Problem 0"<<endl<<endl<<endl;
                break;
            }
            case '1':{
                cout<<"Put Solution to Problem 1"<<endl<<endl<<endl;
                break;
            }
            case '2':{
                cout<<"Put Solution to Problem 2"<<endl<<endl<<endl;
                break;
            }
            case '3':{
                cout<<"Put Solution to Problem 3"<<endl<<endl<<endl;
                break;
            }
        }
    }while(choice<nProbs);
    
    //Display your initial conditions as well as outputs.
    
    //Exit stage right
    return 0;
}

cout<<"Type 0 for solution to Gaddis Chapter 5 Problem 1\n";
        cout<<"Type 1 for solution to Gaddis Chapter 4 Problem 11\n";
        cout<<"Type 2 for solution to Gaddis Chapter 4 Problem 12\n";
        cout<<"Type 3 for solution to Gaddis Chapter 4 Problem 14\n";
        cout<<"Type 4 for solution to Gaddis Chapter 4 Problem 23\n";
        cout<<"Type 5 for solution to Savitch Chapter 3 Problem 11\n";
        cout<<"Type 6 for solution to Savitch Chapter 3 Problem 3\n";
        cout<<"Type 7 for solution to Savitch Chapter 3 Problem 4\n";


switch (choice)
        {
            case '0':
                {
                    int sum=0, num;     //Sum of all numbers and num inputted by user
                    int sntl=0;


                    //Initialize Variables
                    cin>>num;


                    //Map Inputs to Outputs -> Process        
                    do {
                        sum+=sntl;
                        sntl++;
                    }

                    while (sntl<=num);


                    //Display Inputs/Outputs

                    cout<<"Sum = "<<sum;
                    break;
                }
                case '1':
                {
                    unsigned int pay;                  //Initial starting pay that will be doubled 
                    int days, ttl;                  //Number of days worked, and total pay  


                    //Initialize Variables
                    cin>>days;
                    pay=pay+1;
                    ttl=0;

                    //Map Inputs to Outputs -> Process        
                    for (int sntl=0;sntl<days;++sntl, pay+=pay)
                        ttl+=pay;

                    //Display Inputs/Outputs

                    cout<<setprecision(2)<<fixed;
                    cout<<"Pay = $"<<ttl/100<<".";

                    if ((ttl%100)<10)
                        cout<<"0";

                    cout<<ttl%100;
                    break;
                }
                case '2':
                {
                    int min, max, inpt;
                    //Initialize Variables
                    cin>>inpt;
                    max=min=inpt;    
                    //Map Inputs to Outputs -> Process

                    while (inpt!=-99)
                    {
                        if (inpt < min)
                            min = inpt;
                        if (inpt > max)
                            max = inpt;
                        cin >> inpt;
                    }

                    //Display Inputs/Outputs

                    cout<<"Smallest number in the series is "<<min<<endl;
                    cout<<"Largest  number in the series is "<<max;
                    break;
                }
                case '3':
                {
                    int num;        //iterations user inputs
                    char str[2];    //Letter that that the user chooses
                    //Initialize or input i.e. set variable values
                    cin>>num>>str;

                    for (int a=0;a<num;a++)
                    {
                        for (int b=0;b<num;b++)
                        {
                            cout<<str;   
                        }

                        if (a!=(num-1))
                        {
                            cout<<endl;
                        }
                    }
                    break;
                }
                case '4':
                {
                    
                    break;
                }
                case '5':
                {
                    
                    break;
                }
                case '6':
                {
                    
                    break;
                }
                case '7':
                {
                    
                    break;
                }
        }