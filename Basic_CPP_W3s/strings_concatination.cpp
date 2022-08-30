#include <iostream>
using namespace std;
int main()
{   
    string firstName="Nirupama",lastNamae="Sahu";
    cout<<"shreenandan "<<"Sahu\n";
    cout<<firstName + " " + lastNamae +"\n";
    cout<<firstName.append(" Swain");
}
//However, cin considers a space (whitespace, tabs, etc) as a terminating character, which means that it can only display a single word (even if you type many words):