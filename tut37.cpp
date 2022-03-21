#include <iostream>
using namespace std;

// Base Class

class Employee
{
public:
    int id;
    float salary;

    Employee(int inpId)
    {
        id = inpId;
        salary = 34.0;
    }
    Employee() {}
};
// Derived Class
/*
class{{derived-class name}} :{{visibility - mode}}{{base-class-name}}
{
 // class members/methods/etc...
}
Note:
1.Default visibility mode is private
2.Public Visibility Mode: Public members of base class become public members of derived class
3.Private Visibility Mode: Public members of base class become privte members of derived class
4.Private members are never inherited

*/
// Creating a Programmer class derived from Employee Base class
class Programmer : public Employee
{
public:
    Programmer(int inpId)
    {
        id = inpId;
    }
    int languagecode = 9;
    void getData(){
        cout<<id<<endl;
    }
};

int main()
{
    Employee sikandar(1), zubair(2);
    cout << sikandar.salary << endl;
    cout << zubair.salary << endl;
    Programmer skillF(10);
    cout<<skillF.languagecode<<endl;
    cout<<skillF.id<<endl;
    skillF.getData();
    return 0;
}