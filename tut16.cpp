#include <iostream>
using namespace std;

int sum(int a,int b){
int c = a + b;
return c;
}
int swap(int a,int b){// temp a b
int temp =a;          // 4   4  5
a = b;                // 4   5  5
b = temp;             // 4   5  4 
}

int main (){
    int a=4 ,b=5;
    //cout <<"The sum of 4 and 5 is"<<sum(a,b);
    cout<<"The value of a is"<<a<<"and the value of b is"<<swap(a, b)<<endl; 
     return 0; 
}