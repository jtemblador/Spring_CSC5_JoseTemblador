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
    
    char choice,
         nProbs=8; 
    
    do
    {
        cout<<"Type 0 for solution to Gaddis Chapter 4 Problem 8\n";
        cout<<"Type 1 for solution to Gaddis Chapter 4 Problem 11\n";
        cout<<"Type 2 for solution to Gaddis Chapter 4 Problem 12\n";
        cout<<"Type 3 for solution to Gaddis Chapter 4 Problem 14\n";
        cout<<"Type 4 for solution to Gaddis Chapter 4 Problem 23\n";
        cout<<"Type 5 for solution to Savitch Chapter 3 Problem 11\n";
        cout<<"Type 6 for solution to Savitch Chapter 3 Problem 3\n";
        cout<<"Type 7 for solution to Savitch Chapter 3 Problem 4\n";
        
        cin>>choice;
        
        switch (choice)
        {
            case '0':
                {
                    string name1, name2, name3; //User imputted names

                    //Initialize or input i.e. set variable values

                    //Map inputs -> outputs
                    cout<<"Sorting Names\n";
                    cout<<"Input 3 names\n";
                    cin>>name1>>name2>>name3;

                    //Display the outputs
                    if (name1>name2&&name1>name3)
                    {
                        if(name2>name3)
                            cout<<name3<<endl<<name2<<endl<<name1;
                        else    
                            cout<<name2<<endl<<name3<<endl<<name1;
                    }
                    else if (name2>name1&&name2>name3)
                    {
                        if (name1>name3)
                            cout<<name3<<endl<<name1<<endl<<name2;
                        else
                            cout<<name1<<endl<<name3<<endl<<name2;
                    }
                    else 
                    {
                        if (name1>name2)
                            cout<<name2<<endl<<name1<<endl<<name3;
                        else
                            cout<<name1<<endl<<name2<<endl<<name3; 
                    }
                    ;
                }
                case '1':
                {
                    int books, points=0;   //number of books inputted by the user
                    //Initialize or input i.e. set variable values

                    //Map inputs -> outputs

                    //Display the outputs
                    cout<<"Book Worm Points\n";
                    cout<<"Input the number of books purchased this month.\n";
                    cin>>books;
                    cout<<"Books purchased ="<<setw(3)<<books<<endl;

                    if (books==0)
                        points=0;

                    else if (books==1)
                        points=5;

                    else if (books==2)
                        points=15;

                    else if (books==3)
                        points=30;

                    else if (books>=4)
                        points=60;
                    cout<<"Points earned   ="<<setw(3)<<points;
                }
                case '2':
                {
                    int     checks;                                  //Number of checks written
                    float   bal, chkfee=0, monfee=10, lowfee;        //Account Balance
                    //Initialize Variables

                    //Display Outputs
                    cout<<"Monthly Bank Fees\n";
                    cout<<"Input Current Bank Balance and Number of Checks\n";
                    cin>>bal>>checks;

                    if (checks<0)
                        cout<<"Cannot have negative checks.";
                    else if (bal<0)
                        cout<<"Your account is overdrawn.";

                    else 
                    {
                        bal<400?lowfee=15:lowfee=0;
                        cout<<fixed<<setprecision(2);
                        cout<<left<<setw(12)<<"Balance"<<"$"<<right<<setw(9)<<bal<<endl;

                        if (checks<20) 
                        {
                            chkfee=checks*0.1;
                        }

                        else if (checks<40) 
                        {
                            chkfee=checks*0.08;
                        }

                        else if (checks<60) 
                        {
                            chkfee=checks*0.06;
                        }
                        else 
                            chkfee=checks*0.04;

                        cout<<left<<setw(12)<<"Check Fee"<<"$"<<right<<setw(9)<<chkfee<<endl;    
                        cout<<left<<setw(12)<<"Monthly Fee"<<"$"<<right<<setw(9)<<monfee<<endl;
                        cout<<left<<setw(12)<<"Low Balance"<<"$"<<right<<setw(9)<<lowfee<<endl;
                        cout<<left<<setw(12)<<"New Balance"<<"$"<<right<<setw(9)<<bal-(chkfee+monfee+lowfee);
                    }
                }
                case '3':
                {
                    int     tm1, tm2, tm3;  //(Runner times)
                    string  rn1, rn2, rn3;  //(Runner names)
                    //Initialize Variables
                    cout<<"Race Ranking Program\n";
                    cout<<"Input 3 Runners\n";
                    cout<<"Their names, then their times\n";

                    cin>>rn1>>tm1>>rn2>>tm2>>rn3>>tm3; 

                    if (tm1<0||tm2<0||tm3<0) 
                    {
                        cout<<"Only positive numbers for the times!";
                    }
                    else    
                    {
                        if (tm1<tm2&&tm1<tm3&&tm2<tm3)     
                        {
                            cout<<rn1<<"\t"<<setw(3)<<tm1<<endl;
                            cout<<rn2<<"\t"<<setw(3)<<tm2<<endl;
                            cout<<rn3<<"\t"<<setw(3)<<tm3;
                        }
                        else if (tm1<tm2&&tm1<tm3&&tm3<tm2)     
                        {
                            cout<<rn1<<"\t"<<setw(3)<<tm1<<endl;
                            cout<<rn3<<"\t"<<setw(3)<<tm3<<endl;
                            cout<<rn2<<"\t"<<setw(3)<<tm2;
                        }
                        else if (tm2<tm1&&tm2<tm3&&tm1<tm3)     
                        {
                            cout<<rn2<<"\t"<<setw(3)<<tm2<<endl;
                            cout<<rn1<<"\t"<<setw(3)<<tm1<<endl;
                            cout<<rn3<<"\t"<<setw(3)<<tm3;
                        }
                        else if (tm2<tm1&&tm2<tm3&&tm3<tm2)     
                        {
                            cout<<rn2<<"\t"<<setw(3)<<tm2<<endl;
                            cout<<rn3<<"\t"<<setw(3)<<tm3<<endl;
                            cout<<rn1<<"\t"<<setw(3)<<tm1;        
                        }
                        else if (tm3<tm1&&tm3<tm1&&tm1<tm2)     
                        {
                            cout<<rn3<<"\t"<<setw(3)<<tm3<<endl;
                            cout<<rn1<<"\t"<<setw(3)<<tm1<<endl;
                            cout<<rn2<<"\t"<<setw(3)<<tm2;        
                        }
                        else if (tm3<tm1&&tm3<tm2&&tm2<tm3)     
                        {
                            cout<<rn3<<"\t"<<setw(3)<<tm3<<endl;
                            cout<<rn2<<"\t"<<setw(3)<<tm2<<endl;
                            cout<<rn1<<"\t"<<setw(3)<<tm1;        
                        }
                    }
                }
                case '4':
                {
                    char    choice; //Choice of A, B, or C
                    int     hrs;

                    //Initialize Variables
                    cout<<"ISP Bill\n";
                    cout<<"Input Package and Hours\n";
                    cin>>choice>>hrs;

                    cout<<setprecision(2)<<fixed;
                    if (hrs>744) 
                    {
                        cout<<"Hours used in a month cannot exceed 744!\n";
                    }
                    else 
                        switch (choice)
                        {
                        case 'a':
                        case 'A': hrs = hrs>10?(hrs-10):0;
                                  cout<<"Bill = $ "<<(9.95+(2.00*hrs));
                                  break;

                        case 'b':
                        case 'B': hrs = hrs>20?(hrs-20):0;
                                  cout<<"Bill = $ "<<(14.95+(1.00*hrs));
                                  break;

                        case 'c':
                        case 'C': cout<<"Bill = $ "<<(19.95);
                                  break; 
                        default: cout<<"Please choose Plan A, Plan B, or Plan C.";
                        }
                }
                case '5':
                {
                    char    p1, p2;
                    //Declare all variables

                    //Initialize Variables
                    cout<<"Rock Paper Scissors Game\n";
                    cout<<"Input Player 1 and Player 2 Choices\n";

                    cin>>p1>>p2;


                    if ((p1=='R')&&(p2=='S'))
                        cout<<"Rock breaks scissors.";

                    else if ((p1=='R')&&(p2=='s'))
                            cout<<"Rock breaks scissors.";

                    else if ((p1=='r')&&(p2=='S'))
                            cout<<"Rock breaks scissors.";

                    else if ((p1=='r')&&(p2=='s'))
                            cout<<"Rock breaks scissors.";

                    else if ((p1=='S')&&(p2=='R'))
                            cout<<"Rock breaks scissors.";

                    else if ((p1=='S')&&(p2=='r'))
                            cout<<"Rock breaks scissors.";

                    else if ((p1=='s')&&(p2=='R'))
                            cout<<"Rock breaks scissors.";

                    else if ((p1=='s')&&(p2=='a'))
                            cout<<"Rock breaks scissors.";

                    else if ((p1=='P')&&(p2=='R'))
                            cout<<"Paper covers rock.";

                    else if ((p1=='P')&&(p2=='r'))
                            cout<<"Paper covers rock.";

                    else if ((p1=='p')&&(p2=='R'))
                            cout<<"Paper covers rock.";

                    else if ((p1=='p')&&(p2=='r'))
                            cout<<"Paper covers rock.";

                    else if ((p1=='R')&&(p2=='P'))
                            cout<<"Paper covers rock.";

                    else if ((p1=='R')&&(p2=='p'))
                            cout<<"Paper covers rock.";

                    else if ((p1=='r')&&(p2=='P'))
                            cout<<"Paper covers rock.";

                    else if ((p1=='r')&&(p2=='p'))
                            cout<<"Paper covers rock.";

                    else if ((p1=='S')&&(p2=='P'))
                            cout<<"Scissors cuts paper.";

                    else if ((p1=='S')&&(p2=='p'))
                            cout<<"Scissors cuts paper.";

                    else if ((p1=='s')&&(p2=='P'))
                            cout<<"Scissors cuts paper.";

                    else if ((p1=='S')&&(p2=='p'))
                            cout<<"Scissors cuts paper.";

                    else if ((p1=='P')&&(p2=='S'))
                            cout<<"Scissors cuts paper.";

                    else if ((p1=='P')&&(p2=='s'))
                            cout<<"Scissors cuts paper.";

                    else if ((p1=='p')&&(p2=='S'))
                            cout<<"Scissors cuts paper.";

                    else if ((p1=='p')&&(p2=='s'))
                            cout<<"Scissors cuts paper.";

                    else ;
                }
                case '6':
                {
                    unsigned short nm2Cvrt;//Number to Convert
                    string         romnNum;//Roman number conversion

                    //Initialize variables
                    romnNum="";
                    cout<<"Arabic to Roman numeral conversion."<<endl;
                    cout<<"Input the integer to convert."<<endl;
                    cin>>nm2Cvrt;

                    //Process, map inputs to outputs
                    //Is the input valid?
                    if(nm2Cvrt<1000 || nm2Cvrt>3000){
                        cout<<nm2Cvrt<<" is Out of Range!";
                        exit(1);
                    }
                    else 
                    {    
                    //Convert the number of 1000's
                    unsigned char n1000s=nm2Cvrt/1000;
                    switch(n1000s){
                        case 3:romnNum+="M";
                        case 2:romnNum+="M";
                        case 1:romnNum+="M";
                    }

                    //Convert the number of 100's
                    unsigned char n100s=(nm2Cvrt-n1000s*1000)/100;
                    if(n100s==9)romnNum+="CM";
                    if(n100s==8)romnNum+="DCCC";
                    if(n100s==7)romnNum+="DCC";
                    if(n100s==6)romnNum+="DC";
                    if(n100s==5)romnNum+="D";
                    if(n100s==4)romnNum+="CD";
                    if(n100s==3)romnNum+="CCC";
                    if(n100s==2)romnNum+="CC";
                    if(n100s==1)romnNum+="C";

                    //Convert the number of 10's
                    unsigned char n10s=nm2Cvrt%100/10;
                    if(n10s==9)romnNum+="XC";
                    else if(n10s==8)romnNum+="LXXX";
                    else if(n10s==7)romnNum+="LXX";
                    else if(n10s==6)romnNum+="LX";
                    else if(n10s==5)romnNum+="L";
                    else if(n10s==4)romnNum+="XL";
                    else if(n10s==3)romnNum+="XXX";
                    else if(n10s==2)romnNum+="XX";
                    else if(n10s==1)romnNum+="X";

                    //Convert the number of 1's
                    unsigned char n1s=nm2Cvrt%10;
                    romnNum += n1s==9?"IX":
                               n1s==8?"VIII":
                               n1s==7?"VII":
                               n1s==6?"VI":
                               n1s==5?"V":
                               n1s==4?"IV":
                               n1s==3?"III":
                               n1s==2?"II":
                               n1s==1?"I":"";
                    }

                    //Display your initial conditions as well as outputs.
                    cout<<nm2Cvrt<<" is equal to "<<romnNum;
                }
                case '7':
                {
                    string a, b;    //Signs
                    //Initialize or input i.e. set variable values
                    cout<<"Horoscope Program which examines compatible signs.\n";
                    cout<<"Input 2 signs.\n";
                    cin>>a>>b;
                    //Map inputs -> outputs
                    if(a=="Aries"||a=="Leo"||a=="Sagittarius")
                    {
                        if(b=="Aries"||b=="Leo"||b=="Sagittarius")
                            cout<<a<<" and "<<b<< " are compatible Fire signs.";
                        else
                            cout<<a<<" and "<<b<< " are not compatible signs.";
                    }

                    if(a=="Taurus"||a=="Virgo"||a=="Capricorn")
                    {
                        if(b=="Taurus"||b=="Virgo"||b=="Capricorn")
                            cout<<a<<" and "<<b<< " are compatible Earth signs.";
                        else
                            cout<<a<<" and "<<b<< " are not compatible signs.";
                    }

                    if(a=="Gemini"||a=="Libra"||a=="Aquarius")
                    {
                        if(b=="Gemini"||b=="Libra"||b=="Aquarius")
                            cout<<a<<" and "<<b<< " are compatible Air signs.";
                        else
                            cout<<a<<" and "<<b<< " are not compatible signs.";
                    }

                    if(a=="Pisces"||a=="Cancer"||a=="Scorpio")
                    {
                        if(b=="Pisces"||b=="Cancer"||b=="Scorpio")
                            cout<<a<<" and "<<b<< " are compatible Water signs.";
                        else
                            cout<<a<<" and "<<b<< " are not compatible signs.";
                    }
                }
        }
    } while (choice<nProbs);
    
    return 0;
}