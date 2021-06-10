/* 
 * File:   main.cpp
 * Author: Jose Temblador
 * Created on April 29, 2021
 * Purpose:  Menu to be used in the Midterm, future homework and the Final
 *           Add System Libraries and Functions as needed.
 */

//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants Only!

//Function Prototypes
void Menu();
int  getN();
void def(int);
void problem1();
void problem2();
void problem3();
void problem4();
void problem5();
void problem6();

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set a Random number seed here.
    
    //Declare Main variables here.
    int inN;
    
    //Loop on each problem
    do{
        Menu();
        inN=getN();
        switch(inN){
            case 1:    problem1();break;
            case 2:    problem2();break;
            case 3:    problem3();break;
            case 4:    problem4();break;
            case 5:    problem5();break;
            case 6:    problem6();break;
            default:   def(inN);
	}
    }while(inN<7);

    //Exit Stage Right Here!
    return 0;
}

void Menu(){
    cout<<endl;
    cout<<"Type 1 to execute Problem 1"<<endl;
    cout<<"Type 2 to execute Problem 2"<<endl;
    cout<<"Type 3 to execute Problem 3"<<endl;
    cout<<"Type 4 to execute Problem 4"<<endl;
    cout<<"Type 5 to execute Problem 5"<<endl;
    cout<<"Type 6 to execute Problem 6"<<endl;
    cout<<"Type anything else to exit."<<endl<<endl;
}

int  getN(){
    int inN;
    cin>>inN;
    return inN;
}

void def(int inN){
    cout<<endl<<"Typing "<<inN<<" exits the program."<<endl;
}

void problem1(){
    
    unsigned short x;
    char shape;       //f-> forward b->backward x->cross
    
    //Input or initialize values Here
    cout<<"Create a numbered shape that can be sized."<<endl;
    cout<<"Input an integer number [1,50] and a character [x,b,f]."<<endl;
    cin>>x>>shape;
    
    //Draw the shape
    switch (shape) 
{
            case 'x':
{   
    if (x%2==0)
    {
        for (int a=1; a<=x; a++) 
        {
            for (int b=1; b<=x; b++) 
            {
                if (b==x+1-a)
                    cout<<x-a+1;
                else 
                {
                    if (b==a)
                    cout<<a; 
                    else
                        cout<<" ";
                }
            }
            cout<<endl;
        }
    }
    
    else{
            for (int a=1; a<=x; a++) 
            {
                for (int b=1; b<=x; b++) 
                {
                    if (b==x+1-a)
                            cout<<x-b+1;
                    else 
                    {
                        if (b==a)
                        cout<<x-a+1;
                        
                        
                        else
                            cout<<" ";
                    }
                }
                cout<<endl;
            }
        }
}
                break;
    
            
            
            case 'f':
{
    if (x%2==0)
    {
        for (int a=1; a<=x; a++) 
        {
            for (int b=1; b<=x; b++) 
            {
                if (b==x+1-a)
                    cout<<x-a+1;
                else
                    cout<<" ";
            }
            cout<<endl;
        }
    }
    else
    {
        for (int a=1; a<=x; a++) 
        {
            for (int b=1; b<=x; b++) 
            {
                if (b==x+1-a)
                    cout<<x-b+1;
                else
                    cout<<" ";
            }
            cout<<endl;
        }
    }
                break;
}
            
            
            case 'b':
    {
    if (x%2==0)
    {
        for (int a=1; a<=x; a++) 
        {    
            for (int b=1; b<=x; b++) 
            {
                if (b==a)
                    cout<<b; 
                else
                    cout<<" ";

            }
            cout<<endl;
        }
    }
    else 
    {
        for (int a=1; a<=x; a++) 
        {    
            for (int b=1; b<=x; b++) 
            {
                if (b==a)
                    cout<<x-a+1; 
                else
                    cout<<" ";

            }
            cout<<endl;
        }
    }
        
                break;
}
}     
}
    
    
    


void problem2(){
    unsigned char a, b, c, d;
    
    //Input or initialize values Here
    cout<<"Create a histogram chart."<<endl;
    cout<<"Input 4 digits as characters."<<endl;

    cin>>a>>b>>c>>d;
    
   
    //Histogram Here

    if (static_cast<int>(d-48)<=9?true:false) {
        cout<<static_cast<int>(d-48)<<" ";
            for (int i=1;i<=d-48;i++)
                cout<<"*";
        cout<<endl;
    }
    else {
        cout<<d<<" ?"<<endl;
    }
    
    if (static_cast<int>(c-48)<=9?true:false) {
        cout<<static_cast<int>(c-48)<<" ";
            for (int i=1;i<=c-48;i++)
                cout<<"*";
        cout<<endl;
    }
    else {
        cout<<c<<" ?"<<endl;
    }
    
    if (static_cast<int>(b-48)<=9?true:false) {
        cout<<static_cast<int>(b-48)<<" ";
            for (int i=1;i<=b-48;i++)
                cout<<"*";
        cout<<endl;
    }
    else {
        cout<<b<<" ?"<<endl;
    }
    
    
    if (static_cast<int>(a-48)<=9?true:false) {
        cout<<static_cast<int>(a-48)<<" ";
            for (int i=1;i<=a-48;i++)
                cout<<"*";
        cout<<endl;
    }
    else {
        cout<<a<<" ?"<<endl;
    }
}

void problem3(){
    unsigned short number;
    int n1000s,n100s,n10s,n1s;
    
    //Input or initialize values Here

    cout<<"Input an integer [1-3000] convert to an English Check value."<<endl;
    cin>>number;
    
    //Process/Calculations Here
    
    n1000s=number/1000;  //Determine # 1000'S
    number-=n1000s*1000; //Subtract from the Original Arabic
    n100s=number/100;    //Repeat process for all digits
    number-=n100s*100;
    n10s=number/10;    //Repeat process for all digits
    number-=n10s*10;
    n1s=number;
        
    //Output the #1000's
    switch(n1000s){
        case 3:cout<<"Three Thousand ";break;
        case 2:cout<<"Two Thousand ";break;
        case 1:cout<<"One Thousand ";break;
    }
    //Output the #100's
    switch(n100s){
        case 9:cout<<"Nine Hundred ";break;
        case 8:cout<<"Eight Hundred ";break;
        case 7:cout<<"Seven Hundred ";break;
        case 6:cout<<"Six Hundred ";break;
        case 5:cout<<"Five Hundred ";break;
        case 4:cout<<"Four Hundred ";break;
        case 3:cout<<"Three Hundred ";break;
        case 2:cout<<"Two Hundred ";break;
        case 1:cout<<"One Hundred ";break;
    }
    //Output the #10's
    if (((n10s*10)+n1s>=10)&&((n10s*10)+n1s<=19)) {
        switch((n10s*10)+n1s) {
            case 19:cout<<"Nineteen ";break;
            case 18:cout<<"Eighteen ";break;
            case 17:cout<<"Seventeen ";break;
            case 16:cout<<"Sixteen ";break;
            case 15:cout<<"Fifteen ";break;
            case 14:cout<<"Fourteen ";break;
            case 13:cout<<"Thirteen ";break;
            case 12:cout<<"Twelve ";break;
            case 11:cout<<"Eleven ";break;
            case 10:cout<<"Ten ";break;
            
        }
                
    }
    else {
        switch(n10s){
        case 9:cout<<"Ninety ";break;
        case 8:cout<<"Eighty ";break;
        case 7:cout<<"Seventy ";break;
        case 6:cout<<"Sixty ";break;
        case 5:cout<<"Fifty ";break;
        case 4:cout<<"Forty ";break;
        case 3:cout<<"Thirty ";break;
        case 2:cout<<"Twenty ";break;
        case 1:cout<<"X";break;
    }
        //Output the #1's 
    switch(n1s){
        case 9:cout<<"Nine ";break;
        case 8:cout<<"Eight ";break;
        case 7:cout<<"Seven ";break;
        case 6:cout<<"Six ";break;
        case 5:cout<<"Five ";break;
        case 4:cout<<"Four ";break;
        case 3:cout<<"Three ";break;
        case 2:cout<<"Two ";break;
        case 1:cout<<"One ";break;
        case 0:cout<<" ";break;
    }
    }
    
 
    cout<<"and no/100's Dollars"<<endl;
}

void problem4(){
    
}

void problem5(){
    float payRate;
    unsigned short hrsWrkd;
    
    //Input or initialize values Here
    cout<<"Paycheck Calculation."<<endl;
    cout<<"Input payRate in $'s/hour and hours worked"<<endl;
    cin>>payRate>>hrsWrkd;
    
    //Calculate Paycheck
    cout<<setprecision(2)<<fixed;
    if (hrsWrkd<=20)
        cout<<"$"<<hrsWrkd*payRate<<endl;
    if ((hrsWrkd>20)&&(hrsWrkd<40))
        cout<<"$"<<(20*payRate)+((hrsWrkd-20)*(1.5*payRate))<<endl;
    if (hrsWrkd>=40)
        cout<<"$"<<(20*payRate)+((20)*((1.5)*payRate))+((hrsWrkd-40)*(2*payRate))
        <<endl;
}

void problem6(){
    float x,fx,term;
    int nterms;
    
    //Input or initialize values Here
    cout<<"Calculate a series f(x)=x-x^3/3!+x^5/5!-x^7/7!+......."<<endl;
    cout<<"Input x and the number of terms, output f(x)"<<endl;
    cin>>x>>nterms;
    
    //Calculate Sequence sum here
    term=x;
    fx=x;
    if (nterms>1)
    {
            for (int i=2, k=-1; i<=nterms; i+=2, k*=-1)
        {
            term*=((x*x)/(i*(i+1)));
            fx+=term*k;

        }
    }
    
    //Output the result here
    cout<<fixed<<setprecision(6)<<showpoint;
    cout<<fx<<endl;
}