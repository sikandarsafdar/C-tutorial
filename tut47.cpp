#include <iostream>
#include<cmath>
using namespace std;

/*
Create 2 classes:
1.SimpleCalculator - Takes 2 input numbers using a utility function and performs +,-,*,/
and displays the result using another function
2. ScientificCalculator- Takes 2 input numbers using a utility function and
performs any 4 scientific operations of your choice
and displays the result using another function

Creat another class HybridCalculator and inherit it using these 2 classes
Q1. What type of inheritence are you using?-->multiple  inheritence
Q2. Which mode of inheritance are you using?public SimpleCalculator,public ScientificCalculator
Q3. Create an object of HybridCalculator and display results of simple and scientific calculators.
Q4. how is code reusability implemented?
*/

class SimpleCalculator{
    int a,b;
public:
void getDataSimple(){
    cout<<"Enter the value of a"<<endl;
    cin>>a;
    cout<<"Enter the value of b"<<endl;
    cin>>b;

}
void performOperationsSimple(){
    cout<<"The value of a+b :"<<a+b<<endl;
    cout<<"The value of a-b :"<<a-b<<endl;
    cout<<"The value of a*b :"<<a*b<<endl;
    cout<<"The value of a/b :"<<a/b<<endl;
}
};
class  ScientificCalculator{

    int a,b;
public:
void getDataScientific(){
    cout<<"Enter the value of a"<<endl;
    cin>>a;
    cout<<"Enter the value of b"<<endl;
    cin>>b;

}
void performOperationsScientific(){
    cout<<"The value of cos(a) :"<<cos(a)<<endl;
    cout<<"The value of sin(b) :"<<sin(b)<<endl;
    cout<<"The value of exp(a) :"<<exp(a) <<endl;
    cout<<"The value of tan(a):"<<tan(a)<<endl;
} 
};

class HybridCalculator : public SimpleCalculator,public ScientificCalculator{
    
};
int main()
{
// // SimpleCalculator calc;
// ScientificCalculator calc;
// calc.getData();
// calc.performOperations();
HybridCalculator calc;
calc.getDataScientific();
calc.performOperationsScientific();
calc.getDataSimple();
calc.performOperationsSimple();
system("pause"); 
    return 0;
}