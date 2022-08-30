#include<iostream>
#include <cmath>
using namespace std;
int main()
{
    cout<<"Enter 3 numbers \n";
    int a,b,c;
    cin>>a>>b>>c;
    //max and min is used to compare two numbers only
    cout<<max(a,b)<<"\n";
    cout<<min(a,c)<<"\n";
    cout<<sqrt(169)<<"\n";
    cout<<log(2)<<"\n";
    cout<<round(12.3)<<"\n";
    cout<<abs(-12)<<"\n";
    cout<<cbrt(27)<<"\n";
    cout<<ceil(12.4)<<"\n";
    cout<<floor(12.4)<<"\n\n";
    cout<<pow(5,3)<<"\n";
    return 0;
}
