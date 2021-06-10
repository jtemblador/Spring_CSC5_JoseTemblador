/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Purpose:  Roman Numeral Conversion
 */

//System Libraries Here
#include <iostream>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
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
    
    //Exit
    return 0;
}

