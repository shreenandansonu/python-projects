#include <iostream>
using namespace std;

void myFunction(int rollnumber=1200006, string name="manmita")
{
    cout<<"my name is "<<name<<" my roll number is "<<rollnumber<< endl;
}



int main()
{
    myFunction();
    myFunction(1200806,"ShreenandanSahu");
    return 0;
}
//functions need to be declaired before they are called
//function is declaired by writing the data type and using the name and then using the parameters to be taken as input
//in the main function area we have to call the new function to be execuyted or else the function wont get executed.