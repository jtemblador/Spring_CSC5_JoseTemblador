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
    //Set the random number seed
    
    //Declare Variables
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
         
    //Exit stage right or left!
    return 0;
}