#include <iostream>
using namespace std;

// Function prototypes
//type function-name(arguments);
// int sum(int a, int b);// -->Acceptable
// int sum(int a, b);// --> Not Acceptable
int sum(int, int); //--> Acceptable
// void g(void); //--> Acceptable
void g(); //--> Acceptable
int main()
{
    int num1, num2;
    cout << "Enter the first number" << endl;
    cin >> num1;
    cout << "Enter the second number" << endl;
    cin >> num2;
    // num1 and num2 are actual parameters ;
    cout << "The sum is" << sum(nu