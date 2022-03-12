#include <iostream>
using namespace std; 


class Complex{
    int a, b;
    public:
// crating a constructor
// Constructor is special member function with same as name of class.
// It is used to initialize the objects of its class
//It is automatically invoked whenever an object is created

Complex(void); // constructor declaration

    void printNumber()
    {
        cout << "Your number is" << a << "+" << b << "i" << endl;
    }
};

Complex :: Complex(void)  //---> This is a sefault constructor as it takes no parameters
{
    a =10;
    b =20;
  //  cout<<"Hello world";
}
int main () {
    Complex c1,c2,c3;
    c1.printNumber(); 
     c2.printNumber();
     c3.printNumber();
     return 0; 
} 


// Characteristics of constructors 
/*
1. It should be declared in the section of public class
2. They are automatically invoked whenever object is created
3. They cannot return values and do not have return types
4. It can have default arguments
5. We cannot refer to their address
*/