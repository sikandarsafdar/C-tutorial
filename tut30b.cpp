#include <iostream>
using namespace std;

class Point
{
    int x, y;

public:

    Point(int a, int b)
    {
        x = a;
        y = b;
    }

    void displayPoint()
    {
        cout << "The Point is(" << x << "," << y << ")"<<endl;
    }
};


// Create a function (Hint : Make it a friend function)which takes 2 point objects and computes the distance between those points

// Use these examples to check your code :
// distance between(1,1)and (1,1)is0
// distance between(0,1)and (0,6)is5
// distance between(1,0)and (70,0)is69



int main()
{
    Point p(1, 1);
    p.displayPoint();

    Point q(4, 6);
    q.displayPoint();
    return 0;
}