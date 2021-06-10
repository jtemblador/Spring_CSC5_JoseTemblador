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
        
    else {
    
    bal<400?lowfee=15:lowfee=0;
    
    cout<<fixed<<setprecision(2);
    
    cout<<left<<setw(12)<<"Balance"<<"$"<<right<<setw(9)<<bal<<endl;
    
    if (checks<20) {
            chkfee=checks*0.1;
    }
    
    else if (checks<40) {
        chkfee=checks*0.08;
    }
       
    else if (checks<60) {
        chkfee=checks*0.06;
    }
    
    else 
        chkfee=checks*0.04;
       
    
    cout<<left<<setw(12)<<"Check Fee"<<"$"<<right<<setw(9)<<chkfee<<endl;    
    cout<<left<<setw(12)<<"Monthly Fee"<<"$"<<right<<setw(9)<<monfee<<endl;
    cout<<left<<setw(12)<<"Low Balance"<<"$"<<right<<setw(9)<<lowfee<<endl;
    cout<<left<<setw(12)<<"New Balance"<<"$"<<right<<setw(9)<<bal-(chkfee+monfee+lowfee);
    
        }

    
    return 0;
}