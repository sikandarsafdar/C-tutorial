#include <iostream>
using namespace std;

class Complex
{
    int a, b;

public:
    Complex(int, int); // constructor declaration

    void printNumber()
    {
        cout << "Your number is" << a << "+" << b << "i" << endl;
    }
};

Complex ::Complex(int x, int y) //---> This is a parameterized constructor as it takes  2 parameters
{
    a = x;
    b = y;
    //  cout<<"Hello world";
}
int main()
{
    // Implicit call
    Complex a(4, 6);

    // Explicit call
    Complex b = Complex(5, 7);
    a.printNumber();
    b.printNumber();

    return 0;
}