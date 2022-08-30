#include<iostream>
using namespace std;
int main()
{
    int myArray[5]={1,2,3,4,5};
    for (int i=0;i<5;i++)
    {
        cout<<&myArray[i]<<endl;
    }
    return 0;
}
/*
0x61fef8
0x61fefc
0x61ff00
0x61ff04
0x61ff08
*/