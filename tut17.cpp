#include <iostream>
using namespace std;

inline int product(int a, int b)
{
    // Not recommended to use below lines with inline function
    //  static int c =0;//this executes only once
    //  c = c+1;// Next time this function is run,the value of c will be retained

    return a * b;
}

float moneyReceived(int currentMoney, float factor = 1.04)
{
    return currentMoney * factor;
}

//int strlen(constchar *p){

//}
int main()
{
    int a, b;
    // cout << "Enter the value a and b" << endl;
    // cin >> a >> b;
    // cout << "The product of a and b is" << product(a, b) << endl;
    int money = 100000;
    cout << "If you have" << money << "Rs in your bank account,you will receive \n "
     << moneyReceived(money) << "Rs after 1 year "<<endl;
    cout << "For VIP: If you have" << money << "Rs in your bank account,you will receive " << moneyReceived(money, 1.10) << "Rs after 1 year ";
    //  system("pause");
    return 0;
}