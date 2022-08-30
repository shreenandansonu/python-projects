#include <iostream>
using namespace std;
int main()
{
    string students[5]={"Shreenandan","Shree","Krishna","Jaganatha","ShreeDurga"};
    for (int i = 0; i < 5; i++)
    {
        cout<<i<<": "<<students[i]<<"\n";
    }
    string change;
    int ind;
    cout<<"Enter the idex and change\n";
    cin>>change>>ind;
    students[ind]=change;
    for(int j=0;j<5;j++)
    {
        cout<<students[j]<<endl;
    }
    return 0;
}
// Initially i used size of function which shows the byte size of the number shown ut i needed the total no. of elements in the array so as the size of function gae out bigger number than the actual element the loop ran into empty output so this is ehy it didnt show the output line as mentioned in the code.