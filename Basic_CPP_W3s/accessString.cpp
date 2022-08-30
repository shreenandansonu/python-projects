#include <iostream>
using namespace std;
int main()
{
    string myString;
    cout<<"Enter Your String\n";
    cin>>myString;
    cout<<myString[5]<<"\n";
    myString[5]='x';
    cout<<myString;
    return 0;
}