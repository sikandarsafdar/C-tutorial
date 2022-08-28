#include <iostream>
using namespace std;

template <class T>
class Sikandar
{
public:
     T data;
     Sikandar(T a)
     {
          data = a;
     }
     void display();
};
template <class T>
void Sikandar<T>::display()
{
     cout << data;
}
void func(int a)
{
     cout << "I am first func()" << a << endl;
}

template <class T>
void func(T a)
{
     cout << "I am first templatsed func()" << a << endl;
}

template <class T>
void func1(T a)
{
     cout << "I am first templatsed func()" << a << endl;
}
int main()
{
     // Sikandar<float>s(5.7);
     // Sikandar<char>s('c');
     // Sikandar<int> s(89);
     // cout << s.data << endl;
     // s.display();

    // func(4);// Exact match takes the highest priority
     func1(4);
     return 0;
}