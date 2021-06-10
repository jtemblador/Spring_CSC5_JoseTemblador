/*
    Author: Jose Temblador
    Date:   May 16, 2021
    Purpose: Menu to be used with homework
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <cstdlib>   //Srand
#include <ctime>     //Time to set random number seed
#include <cmath>     //Math Library
#include <iomanip>   //Format Library
using namespace std;   //Library Name-space

//User Libraries

//Global/Universal Constants -- No Global Variables
const int COLS=6;
const int ROWS=6;
const float MAXRAND=pow(2,31)-1;

//Science, Math, Conversions, Higher Dimensioned constants only

//Function Prototypes
void fillTbl(      int [][COLS],int);
void prntTbl(const int [][COLS],int);
void fillTbl2(int [][COLS],int);
void prntTbl2(const int [][COLS],int);
void  init(int [],int);//Initialize the array
void  print(int [],int,int);//Print the array
void  revrse(int [],int);//Reverse the array
void  init(float [],int);//Initialize the array
void  print(float [],int,int);//Print the array
float avgX(float [],int);//Calculate the Average
float stdX(float [],int);//Calculate the standard deviation
void fillAry6(int [],int);
void prntAry6(int [],int,int);
bool linSrch(int [],int,int,int&);
void fillAry7(int [],int);
void prntAry7(int [],int,int);
void selSrt(int [],int);
bool binSrch(int [],int,int,int&);
void fillAry8(int [],int);
void prntAry8(int [],int,int);
void bublSrt(int [],int);
bool binSrch8(int [],int,int,int&);

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
        cout<<"Type 1 for Dice Table Sum Problem"<<endl;
        cout<<"Type 2 for Product Table Problem"<<endl;
        cout<<"Type 3 for Reverse Array Contents Problem"<<endl;
        cout<<"Type 4 for Standard Deviation Problem"<<endl;
        cout<<"Type 5 for Linear Search Problem"<<endl;
        cout<<"Type 6 for Binary Search and Selection Sort Problem"<<endl;
        cout<<"Type 7 for Binary Search with Bubble Sort Problem"<<endl;
        cin>>choice;
        
        //Problems solved
        switch(choice){
            case '1':
            {
                int tablSum[ROWS][COLS];
    
                //Initialize or input i.e. set variable values
                fillTbl(tablSum,ROWS);

                //Display the outputs
                prntTbl(tablSum,ROWS);
                break;
            }
            case '2':
            {
                int tblProd[ROWS][COLS];
    
                //Initialize or input i.e. set variable values
                fillTbl2(tblProd,ROWS);

                //Display the outputs
                prntTbl2(tblProd,ROWS);
                break;
            }
            case '3':
            {
                srand(static_cast<unsigned>(time(0)));
    
                //Declare Variables
                const int SIZE=50;
                int test[SIZE];

                //Initialize or input i.e. set variable values
                init(test,SIZE);

                //Display the outputs


                //Reverse the Values
                revrse(test,SIZE);

                //Display the outputs
                print(test,SIZE,10);
                break;
            }
            case '4':
            {
                srand(static_cast<unsigned>(time(0)));
                //Declare Variables
                const int SIZE=20;
                float test[SIZE];

                //Initialize or input i.e. set variable values
                init(test,SIZE);

                //Display the outputs
                print(test,SIZE,5);
                cout<<"The average            = "<<fixed<<setprecision(7)<<avgX(test,SIZE)<<endl;
                cout<<"The standard deviation = "<<setprecision(7)<<stdX(test,SIZE)<<endl;
                break;
            }
            case '5':
            {
                srand(static_cast<unsigned int>(time(0)));
    
                //Declare Variables
                const int SIZE=100;
                int array[SIZE];
                int indx=0,val;

                //Initialize or input i.e. set variable values
                val=50;
                fillAry6(array,SIZE);

                //Display the outputs
                prntAry6(array,SIZE,10);
                if(linSrch(array,SIZE,val,indx))
                    cout<<val<<" was found at indx = "<<indx<<endl;
                break;
            }
            case '6':
            {
                srand(static_cast<unsigned int>(time(0)));
    
                //Declare Variables
                const int SIZE=100;
                int array[SIZE];
                int indx=0,val;

                //Initialize or input i.e. set variable values
                fillAry7(array,SIZE);

                //Sorted List
                selSrt(array,SIZE);

                //Display the outputs
                prntAry7(array,SIZE,10);
                cout<<endl;
                cout<<"Input the value to find in the array"<<endl;
                cin>>val;
                if(binSrch(array,SIZE,val,indx))
                    cout<<val<<" was found at indx = "<<indx<<endl;
                break;
            }
            case '7':
            {
                srand(static_cast<unsigned int>(time(0)));
                //Declare Variables
                const int SIZE=100;
                int array[SIZE];
                int indx=0,val;

                //Initialize or input i.e. set variable values
                fillAry8(array,SIZE);

                //Sorted List
                bublSrt(array,SIZE);

                //Display the outputs
                prntAry8(array,SIZE,10);
                cout<<endl;
                cout<<"Input the value to find in the array"<<endl;
                cin>>val;
                if(binSrch8(array,SIZE,val,indx))
                    cout<<val<<" was found at indx = "<<indx<<endl;
                break;
            }
            case '8':
            {
                
                break;
            }
            case '9':
            {
                
                break;
            }
        }
    }while(choice<nProbs);
    
    //Display your initial conditions as well as outputs.
    
    //Exit stage right
    return 0;
}

void fillAry8(int array[],int SIZE) {
    for (int i=0; i<SIZE; i++)
    cin>>array[i];
}

void prntAry8(int array[],int SIZE,int num) {
    for(int i=0; i<SIZE; i++){
        cout<<array[i]<<" ";
        if(i%10==(10-1))cout<<endl;
    }
}

void bublSrt(int array[],int SIZE) {
    bool swap;
    do{
        swap=false;
        for(int i=0;i<SIZE-1;i++){  //Loop to swap with first in List
            if(array[i]>array[i+1]){       //Put the smallest at top of List
                array[i]=array[i]^array[i+1];  //In place Swap
                array[i+1]=array[i]^array[i+1];  //In place Swap
                array[i]=array[i]^array[i+1];  //In place Swap
                swap=true;
            }
        }
    }while(swap);
}

bool binSrch8(int array[],int SIZE,int val,int &indx) {
    for (int i=0; i<SIZE; i++)
    {
        if (array[i]==val) return true;
        else indx++;
    }
}

void fillAry7(int array[],int SIZE){
    for (int i=0; i<SIZE; i++)
    cin>>array[i];
}

void prntAry7(int array[],int SIZE,int num) {
    for(int i=0; i<SIZE; i++){
        cout<<array[i]<<" ";
        if(i%10==(10-1))cout<<endl;
    }
}

void selSrt(int array[],int SIZE) {
    for(int i=0;i<SIZE-1;i++){      //Loop for each position in List
        int num=i;
        for(int j=i+1;j<SIZE;j++){  //Loop to swap with first in List
            if(array[num]>array[j]){  //Put the smallest at top of List
                num=j;
            }
        }
        int temp=array[i];
        array[i]=array[num];
        array[num]=temp;
    }

}

bool binSrch(int array[],int SIZE,int val,int &indx) {
    for (int i=0; i<SIZE; i++)
    {
        if (array[i]==val) return true;
        else indx++;
    }
}

void fillAry6(int array[],int SIZE) {
    for (int i=0; i<SIZE; i++)
    cin>>array[i];
}

void prntAry6(int array[],int SIZE,int num) {
    
}

bool linSrch(int array[],int SIZE,int val,int &indx) {
    for (int i=0; i<SIZE; i++)
    {
        if (array[i]==val) return true;
        else indx++;
    }
}

void  init(float test[],int SIZE) {
    for (int i=0; i<SIZE; i++)
    {
        cin>>test[i];
    }
}

void  print(float tes[],int SIZE,int num) {
    
}

float avgX(float test[],int SIZE) {
    float avg=0;
    for (int i=0; i<SIZE; i++)
    {
        avg+=test[i];
        if (i==SIZE-1) avg/=static_cast<float>(SIZE);
    }
    return avg;
}

float stdX(float test[],int SIZE) {
    float batman=0;
    float avg=0;
    for (int i=0; i<SIZE; i++)
    {
        avg+=test[i];
        if (i==SIZE-1) avg/=static_cast<float>(SIZE);
    }
    
    for (int i=0; i<SIZE; i++)
    {
        batman+=pow(abs((test[i]-avg)), 2.0);
    }
    batman=sqrt(batman/static_cast<float>(SIZE-1));
    return batman;
}

void init(int test[],int SIZE) {
    for(int i=0; i<SIZE; i++)
    {
        cin>>test[i];
    }
}

void print (int test[],int SIZE,int num) {
    for(int i=0; i<SIZE; i++)
    {
        int count=0;
        cout<<test[i]<<" ";
        count++;
        if (i%num==9)
        {
            cout<<endl;
            count=0;
        }   
    }
}

void revrse(int test[],int SIZE) {
    for (int i=0; i<SIZE/2; i++)
    {
        int temp=test[SIZE-i-1];
        test[SIZE-i-1]=test[i];
        test[i]=temp;
    }
}

void fillTbl(int tablSum[][COLS],int ROWS) {

    for(int i=0; i<=ROWS; i++)
    {
        tablSum[i][0]=i;
        for(int j=0; j<=COLS; j++)
        {
            tablSum[i][j]=j+i;
        }
    }
    
}

void prntTbl(const int tablSum[][COLS],int ROWS) {
    cout<<"Think of this as the Sum of Dice Table\n";
    cout<<"           C o l u m n s\n";
    cout<<"     |";
    
    for (int i=1; i<=ROWS; i++) {
    cout<<setw(4)<<tablSum[i][0];
    }
    cout<<endl;
    cout<<"----------------------------------\n";
    
    for (int i=1; i<=ROWS; i++)
    {
        if (i==1) cout<<"   ";
        if (i==2) cout<<"R  ";
        if (i==3) cout<<"O  ";
        if (i==4) cout<<"W  ";
        if (i==5) cout<<"S  ";
        if (i==6) cout<<"   ";
        cout<<tablSum[i][0]<<" |";
        
        for(int j=1; j<=COLS; j++)
        {
            cout<<setw(4)<<i+j;
        }
        cout<<endl;
    }
}

void fillTbl2(int tblProd[][COLS],int ROWS) {
    for(int i=0; i<=ROWS; i++)
    {
        tblProd[i][0]=i;
        for(int j=0; j<=COLS; j++)
        {
            tblProd[i][j]=j+i;
        }
    }
}

void prntTbl2(const int tblProd[][COLS],int ROWS) {
    cout<<"Think of this as a Product/Muliplication Table\n";
    cout<<"           C o l u m n s\n";
    cout<<"     |";
    
    for (int i=1; i<=ROWS; i++) {
    cout<<setw(4)<<tblProd[i][0];
    }
    cout<<endl;
    cout<<"----------------------------------\n";
    
    for (int i=1; i<=ROWS; i++)
    {
        if (i==1) cout<<"   ";
        if (i==2) cout<<"R  ";
        if (i==3) cout<<"O  ";
        if (i==4) cout<<"W  ";
        if (i==5) cout<<"S  ";
        if (i==6) cout<<"   ";
        cout<<tblProd[i][0]<<" |";
        
        for(int j=1; j<=COLS; j++)
        {
            cout<<setw(4)<<i*j;
        }
        cout<<endl;
    }
}