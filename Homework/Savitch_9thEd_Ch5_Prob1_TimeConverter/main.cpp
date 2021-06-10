/* 
 * File:   
 * Author: 
 * Created on 
 * Purpose:  Creation of Template to be used for all
 *           future projects
 */

//System Libraries
#include <iostream>  //Input/Output Library
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes
void getTime (int&, int&, char&, int&);
void newTime (int&, int&, char&, int&);

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
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
    
    
    //Map inputs -> outputs
    
    //Display the outputs

    //Exit stage right or left!
    return 0;
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
