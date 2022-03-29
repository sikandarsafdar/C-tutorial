#include <iostream>
using namespace std; 

int main () {
     cout<<"entre the number"<<endl;                     
     int x;
     int y;
     cin>>x;
     y= x;
     while(x>1){
     x--;  
     y= y*x;  
     cout<<"The factorial is"<<y<<endl;
     }
     system("pause");
     return 0; 
}