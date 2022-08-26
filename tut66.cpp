#include <iostream>
using namespace std;

template <class T1 = int, class T2 = float, class T3 = char>
class Sikandar
{
public:
    T1 a;
    T2 b;
    T3 c;

    Sikandar(T1 x, T2 y, T3 z)
    {
        a = x;
        b = y;
        c = z;
    }
    void display()
    {
        cout << "The value of a is " << a << endl;
        cout << "The value of a is " << a << endl;
        cout << "The value of c is " << c << endl;
    }
};
int main()
{
    Sikandar<> s(4, 6.4,'c');
    s.display();
    cout<<endl;
    Sikandar<float,char,char>g(4.5,'d','c');
    s.display();
    return 0;
}