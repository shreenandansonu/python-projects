#include<iostream>
using namespace std;
int main()
{   
    int number;
    cout<<"enter the number of fruit you want to  eat\n";
    cin>>number;
    string fruit[number]={};
    cout<<"enter the fruit names you want to  eat\n";
    for (int i = 0; i < number; i++)
    {
        cin>>fruit[i];
    }
    for(int j=1;j<=number;j++)
    {
        cout<<j<<": "<<fruit[j-1]<<"\n";
    }   
}