/*
    Author: Jose Temblador
    Date:   May 16, 2021
    Purpose: Menu to be used with homework
 */

//System Libraries
#include <iostream>    //Input/Output Library
#include <iomanip>     //Format Library
#include <cmath>
using namespace std;   //Library Name-space

//User Libraries

//Global/Universal Constants -- No Global Variables
const int PERCENT=100;
//Science, Math, Conversions, Higher Dimensioned constants only

//Function Prototypes
void minmax (int, int, int, int&, int&);
int fctrl(int);
bool isPrime(int);
int collatz(int);//3n+1 sequence
int collatz5(int);//3n+1 sequence
void getTime (int&, int&, char&, int&);
void newTime (int&, int&, char&, int&);
bool inTime(int&, int&);
void cnvtTime(int, int, int&, int&, char&);
void prntTime(int, int, int , int , char);
float psntVal(float,float,int);
void  getScre(int &,int &,int &,int &,int &);
float calcAvg(int,int,int,int,int);
int   fndLwst(int,int,int,int,int);

//Execution Begins Here
int main(int argc, char** argv) {
    //Set the Random number seed
    
    //Declare variables
    char choice,//To be used in the menu program program
         nProbs;//Max number of Problems
    
    //Initialize variables
    nProbs='10';
    
    //Process, map inputs to outputs
    do{
        //Menu, List of problems
        cout<<"Type 1 for MinMax Problem"<<endl;
        cout<<"Type 2 for Factorial Problem"<<endl;
        cout<<"Type 3 for Prime Number Problem"<<endl;
        cout<<"Type 4 for Collatz Sequence Problem"<<endl;
        cout<<"Type 5 for Collatz Sequence with Sequence Problem"<<endl;
        cout<<"Type 6 for Problem Savitch Chap 5 Prob 12"<<endl;
        cout<<"Type 7 for Problem Savitch Chap 5 Prob 1"<<endl;
        cout<<"Type 8 for Problem Gaddis Chap 6 Prob 9"<<endl;
        cout<<"Type 9 for Problem Gaddis Chap 6 Prob 10"<<endl;
        cin>>choice;
        
        //Problems solved
        switch(choice){
            case '1':
            {
                int min, max;
                int v1, v2, v3;

                //Initialize Variables
                cout<<"Input 3 numbers"<<endl;
                cin>>v1>>v2>>v3;
                min = max = 9999;

                //Map Inputs to Outputs -> Process
                minmax (v1, v2, v3, min, max);

                //Display Inputs/Outputs
                cout<<"Min = "<<min<<endl;
                cout<<"Max = "<<max;                
                break;
            }
            case '2':
            {
                int a=0,      //Factorial nubmer
                num=1;        //Result

                //Initialize Variables
                cout<<"This program calculates the factorial using a function prototype found in the template for this problem.\n";
                cout<<"Input the number for the function.\n";
                cin>>a;

                //Process/Map inputs to outputs
                if (a>=1) num=fctrl(a);

                //Output data
                cout<<a<<"! = "<<num;

                //Exit stage right!
                return 0;
                break;
            }
            case '3':
            {
                int a;
                //Initialize Variables
                cout<<"Input a number to test if Prime.\n";
                cin>>a;
                //Process/Map inputs to outputs

                //Output data
                if (isPrime(a)) cout<<a<<" is not prime.";
                else cout<<a<<" is prime.";                
                break;
            }
            case '4':
            {
                int n;

                //Initialize Variables
                cout<<"Collatz Conjecture Test"<<endl;
                cout<<"Input a sequence start"<<endl;
                cin>>n;

                //Process/Map inputs to outputs
                cout<<"Sequence start of "<<n<<" cycles to 1 in "<<
                        collatz(n)<<" steps";
                break;
            }
            case '5':
            {
                int n,ns;
    
                //Initialize Variables
                cout<<"Collatz Conjecture Test"<<endl;
                cout<<"Input a sequence start"<<endl;
                cin>>n;

                //Process/Map inputs to outputs
                ns=collatz5(n);

                //Output data
                cout<<"Sequence start of "<<n<<" cycles to 1 in "<<ns<<" steps";
                break;
            }
            case '6':
            {
                int hr, min, wait;
                char ampm, choice;
                //Initialize or input i.e. set variable values

                do {
                    getTime (hr, min, ampm, wait);
                    newTime (hr, min, ampm, wait);

                    cout<<"Again:\n";
                    cin>>choice;
                    if (choice== 'y' || choice == 'Y') cout<<endl;
                } while (choice== 'y' || choice == 'Y');
                break;
            }
            case '7':
            {
                int hr, min, outHr, outMin;
                char again, outAMPM;
                //Declare Variables
                cout<<"Military Time Converter to Standard Time\n";
                cout<<"Input Military Time hh:mm\n";

                do {
                    bool good = inTime( hr, min);

                    if (good) 
                    {
                        cnvtTime (hr, min, outHr, outMin, outAMPM);
                        prntTime (hr, min, outHr, outMin, outAMPM);
                    }

                    cout<<"Would you like to convert another time (y/n)\n";
                    cin>>again;

                } while (again=='y' || again=='Y');
                break;
            }
            case '8':
            {
                float   f,  //future Value
                        i,  //interest rate 
                        p;  //Present value

                int     y;  //compounding years
                //Initialize Variables
                cout<<"This is a Present Value Computation\n";
                cout<<"Input the Future Value in Dollars\n";
                cin>>f;
                cout<<"Input the Number of Years\n";
                cin>>y;
                cout<<"Input the Interest Rate %/yr\n";
                cin>>i;
                //Map Inputs to Outputs -> Process
                p=psntVal(f, i/PERCENT, y);

                //Display Inputs/Outputs
                cout<<fixed<<setprecision(2)<<showpoint;
                cout<<"The Present Value = $"<<p;
                break;
            }
            case '9':
            {
                int n1, n2, n3, n4, n5;
                //Display Inputs/Outputs
                getScre(n1, n2, n3, n4, n5);
                break;
            }
        }
    }while(choice<nProbs);
    
    //Display your initial conditions as well as outputs.
    
    //Exit stage right
    return 0;
}

void minmax (int a, int b, int c, int& min, int& max) {
    
    min=max=a;
    
    if (b < min)
        min = b;
    else if (b>max) 
        max = b;
    
    if (c < min)
        min = c;
    else if (c>max) 
        max = c;
        
}

int fctrl(int num) {
    
    for(int i=num; i > 1; i--)
    num*=i-1;
    
    return num;
}

bool isPrime(int a) {
    if (a%2==0) return true;
    else return false;
}

int collatz(int n) {
    int j=1;
    do 
    {
        if (n%2==0) n=n/2;
        else n=(3*n)+1;
        j++;
    } while (n!=1);
    return j;
}

int collatz5(int n) {
    int j=1;
    do 
    {
        if (n%2==0) 
        {
            cout<<n<<", ";
            n=n/2;
        }
        else if (n%2==1) 
        {
            if (n!=1) cout<<n<<", ";
            else cout<<endl;
            n=(3*n)+1;
        }
        j++;
    } while (n!=1);
    cout<<"1"<<endl;
    return j;
}

void getTime (int &hr, int &min, char &ampm, int &wait) {
    cout<<"Enter hour:\n\n";
    cin>>hr;
    cout<<"Enter minutes:\n\n";
    cin>>min;
    cout<<"Enter A for AM, P for PM:\n\n";
    cin>>ampm;
    cout<<"Enter waiting time:\n\n";
    cin>>wait;
}

void newTime (int &hr, int &min, char &ampm, int &wait) {
    
    
    cout<<"Current time = ";
    if (hr<10) cout<<"0";
    cout<<hr<<":";
    if (min<10) cout<<"0";
    cout<<min;
    ampm=='A'? cout<<" AM" : cout<< " PM";
    cout<<endl;
    
    if (ampm=='p'||ampm=='P') hr+=12;
    min+=wait;
    if (min>=60) hr += min/60;
    min%=60;
    
    hr %= 24;
    if (hr>=12) ampm='P';
    else ampm='A';
    hr%=12;
    if (hr==0) hr=12;
    
    cout<<"Time after waiting period = ";
    if (hr<10) cout<<"0";
    cout<<hr<<":";
    if (min<10) cout<<"0";
    cout<<min;
    ampm=='A'? cout<<" AM" : cout<< " PM";
    
    cout<<endl<<endl;
}

bool inTime(int &hr, int &min) {
    char dummy;
    
    cin>>hr>>dummy>>min;
    
    if ( hr < 0 || hr > 23 || min < 0 || min > 59)
    {
        if (hr < 10)  cout<<'0';
        cout<<hr<<':';
        if (min < 10) cout<<'0';
        cout<<min<<" is not a valid time"<<endl;
        
        return false;
        
    }
    return true;
}

void cnvtTime(int hr24, int min24, int &outHr, int &outMin, char &outAMPM) {
    if (hr24>=12) outAMPM='P';
    else outAMPM='A';
    
    outHr=hr24%12;
    if (outHr==0) outHr=12;
    
    outMin=min24;
    
}
void prntTime(int hr24, int min24, int outHr, int outMin, char outAMPM) {
    if (hr24<10)  cout<<'0';
    cout<<hr24<<":";
    if (min24<10) cout<<'0';
    cout<<min24<<" = ";
    
    cout<<outHr<<":";
    if (outMin<10) cout<<'0';
    cout<<outMin<<" ";
    cout<<((outAMPM=='a' || outAMPM=='A' ) ? "AM" : "PM");
    cout<<endl;
    
}

float psntVal(float f,float i,int y) {
    return f/pow(1+i, y);
}

void getScre(int &n1,int &n2,int &n3,int &n4,int &n5) {
    cout<<"Find the Average of Test Scores\n";
    cout<<"by removing the lowest value.\n";
    cout<<"Input the 5 test scores.\n";
    cin>>n1>>n2>>n3>>n4>>n5;
    cout<<setprecision(1)<<fixed<<showpoint;
    cout<<"The average test score = "<<calcAvg(n1,n2,n3,n4,n5);
}

float calcAvg(int n1,int n2,int n3,int n4,int n5) {
    return (n1+n2+n3+n4+n5-fndLwst(n1,n2,n3,n4,n5))/4;
}

int fndLwst(int n1,int n2,int n3,int n4,int n5) {
    int low=n1;
    if (n2<low) low = n2;
    if (n3<low) low = n3;
    if (n4<low) low = n4;
    if (n5<low) low = n5;
    
    return low;
}