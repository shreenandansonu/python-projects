#include<iostream>
using namespace std;
int main()
{   
    int a,b;
    cout<<"Enter two numbers \n";
    cin>>a>>b;
    if (a<b) {
    cout<<a<<" is smaller than "<<b<<"\n";
    }
    else if (b<a) {
    cout<<a<<" is larger than "<<b<<"\n";
    }
    else {
    cout<<a<<" is equal to "<<b<<"\n";
    }    
    // if else short hand notation
    /*
    variableType variableName = (condition) ? expressionTrue : expressionFalse;
    */
    int time;
    cout<<"What is the time in 24 hours format?\n";
    cin>>time;
    string greeting = (time>12)? "Good Afternoon\n" : "Good Morning\n";
    cout<<greeting;
    return 0;
}