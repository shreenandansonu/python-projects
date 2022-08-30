#include<iostream>
using namespace std;
int main()
{
    // this is a pointer which is a data type which uses the memmory adress of othe data types to store in.
    int myNumber=10;
    int *mynum=&myNumber;
    cout<<mynum<<endl;
    cout<<*mynum<<endl;
    *mynum=10506;
    cout<<*mynum;
    return 0;
    //astrick symbol is call dereference operator 
}