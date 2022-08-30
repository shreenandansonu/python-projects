#include <iostream>
using namespace std;
int main()
{
    int myNumber;
    cout<<"enter your number\n";
    cin>>myNumber;
    for (int i = 0; i < myNumber+1; i++)    
    {   
        if (i%5==0)
        {
            continue;
        }
        cout<<i<<" ";
    }
    cout<<endl;
    int j=0;
    while (j<myNumber+1)
    {
        if(j==49)
        {
            break;
        }
        cout<<j<<" ";
        j+=1;
    }
    return 0;
    
} 