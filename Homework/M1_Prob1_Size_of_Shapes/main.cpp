/* 
 * File:   main.cpp
 * Author: YOUR NAME HERE
 * Created on January DATE AND TIME HERE
 * Purpose:  Cross one-side or the other
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
    //Exit
    return 0;
}