/* 
 * Author: 
 * Created on 
 * Purpose:  
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants - Math/Physics Constants, Conversions,
//                   2-D Array Dimensions

//Function Prototypes
int collatz5(int);//3n+1 sequence

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    int n,ns;
    
    //Initialize Variables
    cout<<"Collatz Conjecture Test"<<endl;
    cout<<"Input a sequence start"<<endl;
    cin>>n;
    
    //Process/Map inputs to outputs
    ns=collatz5(n);
    
    //Output data
    cout<<"Sequence start of "<<n<<" cycles to 1 in "<<
            ns<<" steps";
    
    //Exit stage right!
    return 0;
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