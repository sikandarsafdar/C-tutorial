#include <iostream>
using namespace std; 

int main () {
     int grade;
     cout<<"Your grade is"<<endl;
     cin>>grade;
     if((grade<33)&& (grade>0)){
         cout<<"You are fail"<<endl;
     }
    else if((grade>=33)&&(grade<50)){
         cout<<"You are pass"<<endl;
     }  
     else if((grade>=50)&&(grade<70)){
         cout<<"You are fair"<<endl;
     }
     
    else if((grade>=70)&&(grade<90)){
         cout<<"You are good"<<endl;
     }
    else if((grade>=90)&&(grade<100)){
         cout<<"You are excellent"<<endl;
     }
    else if(grade==100){
         cout<<"You are super"<<endl;
     }
        else {
            cout<<"You selected a wrong number .Please enter number between 0 -to- 100"<<endl;
        }
     system("pause");
     return 0; 
}