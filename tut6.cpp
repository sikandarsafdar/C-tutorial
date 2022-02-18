// There are two types ofheader files:
//1.System header files: it comes with the compiler
#include<iostream>
//2.User defined header files:it is written by programmer
//#include "this.h" //-->this will produce error if this.h is not present in current directory
using namespace std;

int main(){
cout<<"opeators in C++"<< endl;
int a=4,b=5;
cout<<"following are the types of operators in C++"<<endl;
//Arithmetic operators
cout<<"The value of a + b "<< a+b<<endl;
cout<<"The value of a-b is "<< a-b<<endl;
cout<<"The value of a*b is "<< a*b<<endl;
cout<<"The value of a/b is "<< a/b<<endl;
cout<<"The value of a%b is "<< a%b<<endl;
cout<<"The value of a++ is "<< a++<<endl;
cout<<"The value of a-- is "<<a--<<endl;
cout<<"The value of ++a"<< ++a<<endl;
cout<<"The value of --a is "<< --a<<endl;

// Assignment operators --> used to assign values to variables
//int a=3,b=9;
//char d='d';

// comparison operators
cout<<"The value of a == b"<<(a==b)<<endl;
cout<<"The value of a > b"<<(a>b)<<endl;
cout<<"The value of a < b"<<(a<b)<<endl;
cout<<"The value of a >= b"<<(a>=b)<<endl;
cout<<"The value of a <= b"<<(a<=b)<<endl;
cout<<"The value of a != "<<(a!=b)<<endl;

//logical operators 
cout<<"Following are logical operators in C++"<<endl;
cout<<"The value of this logical and operator ((a==b) && (a<b)) is:" <<((a==b) && (a<b))<<endl;
cout<<"The value of this logical or operator ((a==b) || (a<b)) is:" <<((a==b) || (a<b))<<endl;
cout<<"The value of this logical not operator (!(a==b) ) is:" <<(!(a==b) )<<endl;

return 0;
}