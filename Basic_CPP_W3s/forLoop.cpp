#include <iostream>
using namespace std;
int main()
{
    int mynumber;
    cout<<"please fill some number\n";
    cin>>mynumber;
    for (int i = 0; i < mynumber+1; i+=2)
    {
        cout<<i<<" ";
    }
    cout<<"Shreenanadan is best";
    return 0;
    
}
// printing all the even numbersfrom 0 to user input