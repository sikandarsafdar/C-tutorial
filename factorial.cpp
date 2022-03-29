#include <iostream>
using namespace std; 


int main () {
    cout<<"Entre a number"<<endl;
    int a,b;
    cin>>a;
    b = a;
    while(a>1){
        a--;
        b = b*a;
        cout<<"the value of b is"<<b<<endl;
    }
     system("pause");
     return 0; 
}