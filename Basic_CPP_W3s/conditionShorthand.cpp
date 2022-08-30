#include <iostream>
using namespace std;
int main()
{
    cout<<"What is the time ? \n";
    int time;
    cin>>time;
    string cofeetime=(time>12)? "Yes":"NO";
    cout<<cofeetime;
    return 0; 
}