/* 
 * File:   
 * Author: 
 * Created on 
 * Purpose:  C++ Template
 */

//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;

//Global Constants only
//Math, Physics, Conversions, Higher Order Dimension 

//Function Prototypes


//Execution Begins Here
int main(int argc, char** argv) {
    //Set random number seed
    
    //Declare all variables
    int     tm1, tm2, tm3;  //(Runner times)
    string  rn1, rn2, rn3;  //(Runner names)
    //Initialize Variables
    cout<<"Race Ranking Program\n";
    cout<<"Input 3 Runners\n";
    cout<<"Their names, then their times\n";
    
    cin>>rn1>>tm1>>rn2>>tm2>>rn3>>tm3; 
    
    
        if (tm1<0||tm2<0||tm3<0) {
            cout<<"Only positive numbers for the times!";
        }
        
    else    {
             if (tm1<tm2&&tm1<tm3&&tm2<tm3)     {
            cout<<rn1<<"\t"<<setw(3)<<tm1<<endl;
            cout<<rn2<<"\t"<<setw(3)<<tm2<<endl;
            cout<<rn3<<"\t"<<setw(3)<<tm3;
        }
        else if (tm1<tm2&&tm1<tm3&&tm3<tm2)     {
            cout<<rn1<<"\t"<<setw(3)<<tm1<<endl;
            cout<<rn3<<"\t"<<setw(3)<<tm3<<endl;
            cout<<rn2<<"\t"<<setw(3)<<tm2;
        }
        else if (tm2<tm1&&tm2<tm3&&tm1<tm3)     {
            cout<<rn2<<"\t"<<setw(3)<<tm2<<endl;
            cout<<rn1<<"\t"<<setw(3)<<tm1<<endl;
            cout<<rn3<<"\t"<<setw(3)<<tm3;
        }
        else if (tm2<tm1&&tm2<tm3&&tm3<tm2)     {
            cout<<rn2<<"\t"<<setw(3)<<tm2<<endl;
            cout<<rn3<<"\t"<<setw(3)<<tm3<<endl;
            cout<<rn1<<"\t"<<setw(3)<<tm1;        
        }
        else if (tm3<tm1&&tm3<tm1&&tm1<tm2)     {
            cout<<rn3<<"\t"<<setw(3)<<tm3<<endl;
            cout<<rn1<<"\t"<<setw(3)<<tm1<<endl;
            cout<<rn2<<"\t"<<setw(3)<<tm2;        
        }
        else if (tm3<tm1&&tm3<tm2&&tm2<tm3)     {
            cout<<rn3<<"\t"<<setw(3)<<tm3<<endl;
            cout<<rn2<<"\t"<<setw(3)<<tm2<<endl;
            cout<<rn1<<"\t"<<setw(3)<<tm1;        
        }
             
            }    
            
    
    //Display Outputs
    
    
    
    return 0;
}