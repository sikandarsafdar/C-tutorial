#include <iostream>
using namespace std;

class BankDeposit{
int principal;
int years;
float interestRate;
float returnValue; 

public:
BankDeposit(){}
BankDeposit(int p,int y,float r); // r can be a value like 0.04
BankDeposit(int p,int y,int r); // r can be a value like 14

};

BankDeposit ::BankDeposit(int p,int y,float r)
{
    principal =p;
    years = y;
    interestRate = r;
    returnValue = 0;
    for (int i = 0; i <y; i++)
    {
 returnValue = returnValue * (1+r);
    }
    
}
int main () {


     
     return 0 ;
}