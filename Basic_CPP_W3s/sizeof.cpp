#include<iostream>
using namespace std;
int main()
{
    int mynumber[]={455,89,64,35};
    cout<<sizeof(mynumber)<<endl;
    cout<<sizeof(mynumber)/sizeof(int)<<endl;
    string myString[]={"Shreenandan","Laxam","kumarsena"};
    cout<<sizeof(myString)<<endl;
    cout<<sizeof(string)<<endl;
    cout<<sizeof(myString)/sizeof(string);
    return 0;
}