#include <iostream>
using namespace std;
int main() 
{
    string myString;    
    cout<<"Give some string input \n";
    cin>>myString;
    //cout<<"length of my string is "<<myString.length()<<"\n";
    cout<<"length of my string is "<<myString.size()<<"\n";
    cout<<myString.append(" How you doin?");
    return 0;
}