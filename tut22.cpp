//  OOPs - Classes and objects

// C++ --> initially called -->C with classes by stroustroup
//  class --> extension of structures(in C)
//  // structurs had limitations
//            - members are public
//            - No methods
// classes --> structures + more
// classes --> can have methods and properties
// classes --> can make few members as private & few as public
// structures in C++ are typedefed
// you can declare objects along with class declaration like this:

// class Employee{
/*  class defination
// }
harry ,rohan ,sikandar;*/
// harry.salary = 8 makes no sense if salary is private

// Nesting of member functions
#include <iostream>
#include <string>
using namespace std;

class binary
{
    string s;

public:
    void read(void);
    void chk_bin(void);
    void ones_compliment(void);
    void display(void);
};

void binary ::read(void)
{
    cout << "Enter a binary number" << endl;
    cin >> s;
    system("pause");
}

void binary ::chk_bin()
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '0' && s.at(i) != '1')
        {
            cout << "Incorrect binary format" << endl;
            exit(0);
        }
    }
}
void binary::ones_compliment(void)
{
    chk_bin();
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '0')
        {
            s.at(i) = '1';
        }
        else
        {
            s.at(i) = '0';
        }
    }
}

void binary ::display(void)
{
    cout << "Displaying your binary number" << endl;
    for (int i = 0; i < s.length(); i++)
    {
        cout << s.at(i);
    }
    cout << endl;
}

int main()
{

    binary b;
    b.read();
    // b.chk_bin();
    b.display();
    b.ones_compliment();
    b.display();
    return 0;
    system("pause");
}
