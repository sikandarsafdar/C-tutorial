#include <iostream>
using namespace std;
class Base
{
protected:
    int a;

private:
    int b;
};

/* For a protected number
                        Public derivation   Private derivation   Protected derivation
1. Private member       not inherited        not inherited        not inherited
2. Protected  member    Protected            private               Protected 
3. Public member        Public               private               Protected 
*/
class Derived : protected Base{

};
int main()
{
Base b;
Derived d;
// cout<<b.a; //will not work since a is protected in both base as well as derived class
    return 0;
}