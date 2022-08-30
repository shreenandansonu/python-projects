#include <iostream>
using namespace std;
int main()
{
    int mynumber;
    cout<<"Enter your integer"<< endl;
    cin>>mynumber;
    int i=1;
    do
    {
        cout<<i<<" ";
        i+=1;
    } while (i<mynumber+1);
    return 0;
}
    