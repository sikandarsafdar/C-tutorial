#include <iostream>
using namespace std; 

int main () {
     int a;
     int b;
     cin>>a;
     cin>>b;
     for(int c=a;c<=b;c++){
         if(c%2==0){
             cout<<"Even number"<<c<<endl;
         }
         else{
             cout<<"Odd numbers"<<c<<endl;
         }
     }
     system("pause");
     return 0 ;
}