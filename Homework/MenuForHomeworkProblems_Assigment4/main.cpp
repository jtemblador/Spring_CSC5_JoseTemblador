/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on January 2, 2019, 12:36 PM
 * Purpose:  Creation of Template to be used for all
 *           future projects
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <iomanip>

using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    
    char qqq,//To be used in the menu program program
         nProbs;//Max number of Problems
    
    //Initialize variables
    nProbs='10';
    
    //Process, map inputs to outputs
    do{
        //Menu, List of problems
        cout<<endl;
        cout<<endl;
        cout<<"Type 0 for solution to Gaddis Chapter 5 Problem 1\n";
        cout<<"Type 1 for solution to Gaddis Chapter 5 Problem 7\n";
        cout<<"Type 2 for solution to Gaddis Chapter 5 Problem 13\n";
        cout<<"Type 3 for solution to Gaddis Chapter 5 Problem 22\n";
        cout<<"Type 4 for solution to Gaddis Chapter 5 Problem 23\n";
        cout<<"Type 5 for solution to Savitch Chapter 4 Problem 1\n";
        cout<<"Type 6 for solution to Savitch Chapter 4 Problem 2\n";
        cout<<"Type 7 for solution to Savitch Chapter 4 Problem 4\n";
        cout<<"Type 8 for solution to Savitch Chapter 4 Problem 5\n";
        cout<<"Type 9 for solution to Savitch Chapter 4 Problem 9\n";
        cin>>qqq;
        
        //Problems solved
        switch(qqq){
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
                    int num;    //Number '+' will repeat to
                    int c=0;

                    cin>>num;

                    for (int a=0;a<num;a++)
                    {

                        for(int b=0;b<=a;b++)
                        {
                            cout<<"+";
                        }
                        cout<<endl;
                        cout<<endl;
                    }

                    for (int a=0;a<num;a++)
                    {
                        for (int b=num;b>a;b--)
                        {
                            cout<<"+";
                        }
                        if (a!=num-1) 
                        {
                            cout<<endl;
                            cout<<endl;
                        }
                    }
                    break;
                }
                case '5':
                {
                    float cnv=0.264179;
                    int gas;
                    int mls;
                    char anwr;

                    cout<<"Enter number of liters of gasoline:\n";
                    cin>>gas;
                    cout<<endl;
                    cout<<"Enter number of miles traveled:\n";
                    cin>>mls;
                    cout<<endl;
                    cout<<setprecision(2)<<fixed;
                    cout<<"miles per gallon:"<<endl<<(mls)/(gas*cnv)<<endl;
                    cout<<"Again:\n";
                    cin>>anwr;
                    cout<<endl;


                    if (anwr=='y'||anwr=='Y')
                    {
                        cout<<"Enter number of liters of gasoline:\n";
                        cin>>gas;
                        cout<<endl;
                        cout<<"Enter number of miles traveled:\n";
                        cin>>mls;
                        cout<<endl;
                        cout<<setprecision(2)<<fixed;
                        cout<<"miles per gallon:"<<endl<<(mls)/(gas*cnv)<<endl;
                        cout<<"Again:\n";
                        cin>>anwr;
                    }
                    break;
                }
                case '6':
                {
                    float cnv=0.264179, c1, c2;
                    int gas, mls;
                    char anwr;

                    cout<<"Car 1\n";
                    cout<<"Enter number of liters of gasoline:\n";
                    cin>>gas;
                    cout<<"Enter number of miles traveled:\n";
                    cin>>mls;
                    c1=(mls)/(gas*cnv);
                    cout<<setprecision(2)<<fixed;
                    cout<<"miles per gallon: "<<c1<<endl;
                    cout<<endl;

                    cout<<"Car 2\n";
                    cout<<"Enter number of liters of gasoline:\n";
                    cin>>gas;
                    cout<<"Enter number of miles traveled:\n";
                    cin>>mls;
                    c2=(mls)/(gas*cnv);
                    cout<<"miles per gallon: "<<c2<<endl;
                    cout<<endl;

                    if (c1>c2) 
                        {
                            cout<<"Car 1 is more fuel efficient";
                            cout<<endl;
                            cout<<endl;
                        }

                        else
                        {
                            cout<<"Car 2 is more fuel efficient";
                            cout<<endl;
                            cout<<endl;
                        }

                    cout<<"Again:\n";
                    cin>>anwr;
                    cout<<endl;

                    if (anwr=='y'||anwr=='Y')
                    {
                        cout<<"Car 1\n";
                        cout<<"Enter number of liters of gasoline:\n";
                        cin>>gas;
                        cout<<"Enter number of miles traveled:\n";
                        cin>>mls;
                        c1=(mls)/(gas*cnv);
                        cout<<setprecision(2)<<fixed;
                        cout<<"miles per gallon: "<<c1<<endl;
                        cout<<endl;

                        cout<<"Car 2\n";
                        cout<<"Enter number of liters of gasoline:\n";
                        cin>>gas;
                        cout<<"Enter number of miles traveled:\n";
                        cin>>mls;
                        c2=(mls)/(gas*cnv);
                        cout<<"miles per gallon: "<<c2<<endl;
                        cout<<endl;

                        if (c1>c2) 
                            {
                                cout<<"Car 1 is more fuel efficient";
                                cout<<endl;
                                cout<<endl;
                            }

                            else
                            {
                                cout<<"Car 2 is more fuel efficient";
                                cout<<endl;
                                cout<<endl;
                            }
                        cout<<"Again:\n";
                        cin>>anwr;
                    }
                    break;
                }
                case '7':
                {
                    float crnt, yrg, ir;  //Current price then year-ago price
                    char anwr;
                    
                    cout<<"Enter current price:\n";
                    cin>>crnt;

                    cout<<"Enter year-ago price:\n";
                    cin>>yrg;


                    ir=(crnt-yrg)/yrg;
                    cout<<setprecision(2)<<fixed;
                    cout<<"Inflation rate: "<<ir*100<<"%\n";
                    cout<<endl;

                    cout<<"Again:\n";
                    cin>>anwr;
                    cout<<endl;

                    if (anwr=='y'||anwr=='Y')
                    {
                       cout<<"Enter current price:\n";
                        cin>>crnt;

                        cout<<"Enter year-ago price:\n";
                        cin>>yrg;


                        ir=(crnt-yrg)/yrg;
                        cout<<setprecision(2)<<fixed;
                        cout<<"Inflation rate: "<<ir*100<<"%\n";
                        cout<<endl;

                        cout<<"Again:\n";
                        cin>>anwr;
                    }
                    break;
                }
                case '8':
                {
                    float crnt, yrg, ir1, ir2, infPr1, infPr2;  //Current price then year-ago price
                    char anwr;

                    cout<<"Enter current price:\n";
                    cin>>crnt;

                    cout<<"Enter year-ago price:\n";
                    cin>>yrg;


                    ir1=(crnt-yrg)/yrg;
                    cout<<setprecision(2)<<fixed;
                    cout<<"Inflation rate: "<<ir1*100<<"%\n";
                    cout<<endl;
                    infPr1=(ir1*crnt)+crnt;
                    cout<<"Price in one year: $"<<infPr1<<endl;
                    ir2=((infPr1-crnt)/crnt);
                    infPr2=(ir2*infPr1)+infPr1;
                    cout<<"Price in two year: $"<<infPr2<<endl;

                    cout<<endl;
                    cout<<"Again:\n";
                    cin>>anwr;
                    cout<<endl;

                    if (anwr=='y'||anwr=='Y')
                    {
                        cout<<"Enter current price:\n";
                        cin>>crnt;

                        cout<<"Enter year-ago price:\n";
                        cin>>yrg;


                        ir1=(crnt-yrg)/yrg;
                        cout<<setprecision(2)<<fixed;
                        cout<<"Inflation rate: "<<ir1*100<<"%\n";
                        cout<<endl;
                        infPr1=(ir1*crnt)+crnt;
                        cout<<"Price in one year: $"<<infPr1<<endl;
                        ir2=((infPr1-crnt)/crnt);
                        infPr2=(ir2*infPr1)+infPr1;
                        cout<<"Price in two year: $"<<infPr2<<endl;

                        cout<<endl;
                        cout<<"Again:\n";
                        cin>>anwr;
                    }
                    break;
                }
                case '9':
                {
                    float tm1, tm2, tm3, lg1, lg2; 
                    
                    cout<<"Enter first number:\n";
                    cin>>tm1;
                    cout<<endl;

                    cout<<"Enter Second number:\n";
                    cin>>tm2;
                    cout<<endl;

                    cout<<"Enter third number:\n";
                    cin>>tm3;
                    cout<<endl;

                    if (tm1>tm2)     
                        {
                            lg1=tm1;   
                        }
                        else     
                        {
                            lg1=tm2;
                        }    

                    cout<<"Largest number from two parameter function:\n";
                    cout<<lg1;
                    cout<<endl;
                    cout<<endl;

                    if (tm1>tm2&&tm1>tm3&&tm2>tm3)     
                        {
                            lg1=tm1;
                        }
                        else if (tm1>tm2&&tm1>tm3&&tm3>tm2)     
                        {
                            lg1=tm1;
                        }
                        else if (tm2>tm1&&tm2>tm3&&tm1>tm3)
                        {
                            lg1=tm2;
                        }
                        else if (tm2>tm1&&tm2>tm3&&tm3>tm2)
                        {
                            lg1=tm2;
                        }
                        else if (tm3>tm1&&tm3>tm1&&tm1>tm2)
                        {
                            lg1=tm3;
                        }
                        else if (tm3>tm1&&tm3>tm2&&tm2>tm3)
                        {
                            lg1=tm3;
                        }

                    cout<<"Largest number from three parameter function:\n";
                    cout<<lg1;
                    cout<<endl;

                    break;
                }
        }
    }while(qqq<=nProbs);
    
    //Display your initial conditions as well as outputs.
    
    //Exit stage right
    return 0;
}