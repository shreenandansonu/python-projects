#include <iostream>
using namespace std;
int main()
{
    //goin to make a 3x3 matrix
    int myMatrix[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    for (int i=0; i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cout<<myMatrix[i][j]<<" ";
        }
        cout<<endl;
    }
    
    cout<<"Enter the dimenssion of matrix you want\n";
    int a,b;
    cin>>a>>b;
    int matrix[a][b]={};
    for(int k=0;k<a;k++)
    {
        for (int l=0;l<b;l++)
        {
            cin>>matrix[k][l];
        }
    }
    
    for (int m=0; m<a;m++)
    {
        for(int n=0;n<b;n++)
        {
            cout<<matrix[m][n]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
//this code generates a matri of desired dimession by takling input from the user and displays it in the console