#include <iostream>
using namespace std;
int main()
{
    //it's an way to group together related things to a category
    //syntax for structure is struct{_-_-_-_-_-_-}identifier1,identifier2,identifier3.......

    struct
    {
        int myNumber=10;
        bool myBool=1;
        string myString="Shreenandan";
        char myChar='a';
        
    }myStructure;
    
    cout<<myStructure.myString<<endl;

    struct {
        int rollNumber;
        string name;
        string branch;
        bool ninepointer;
    }shreenandan,prerana;
    {
        shreenandan.name="shreenandanSahu";
        shreenandan.rollNumber=1200806;
        shreenandan.branch="bioMedical";
        shreenandan.ninepointer=1;
        prerana.name="preranaChordia";
        prerana.rollNumber=120004;
        prerana.branch="bioMedical";
        prerana.ninepointer=0;
    };
    
    cout<<shreenandan.name<<" "<<shreenandan.rollNumber<<" "<<shreenandan.branch<<" "<<shreenandan.ninepointer<<" \n";
    cout<<prerana.name<<" "<<prerana.rollNumber<<" "<<prerana.branch<<" "<<prerana.ninepointer<<" \n";

    struct cars{
        int modelnumber;
        string carName;
        int estdYear;
    };
    
    cars car1;
    car1.modelnumber=456871899;
    car1.carName="Mercidies_benz";
    car1.estdYear=1999;

    cars car2;
    car2.modelnumber=541464445;
    car2.carName="Audi_Q8";
    car2.estdYear=2022;

    cout<<car1.modelnumber<<" "<<car1.estdYear<<" "<<car1.carName<<" \n";
    cout<<car2.modelnumber<<" "<<car2.estdYear<<" "<<car2.carName<<" \n";

    return 0;

}