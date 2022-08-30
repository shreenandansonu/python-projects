#include<iostream>
using namespace std;
int main(){
    string myString;
    cout<<"Please give a string\n";
    getline(cin,myString);
    cout<<myString.length();
    return 0;
}