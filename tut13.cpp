#include <iostream>
using namespace std;

int main()
{
    int marks[4] = {23, 45, 56, 89};
    int mathMarks[4];
    mathMarks[0] = 2278;
    mathMarks[1] = 738;
    mathMarks[2] = 378;
    mathMarks[3] = 578;
    cout<<"These are math marks"<<endl; 
    cout << mathMarks[0] << endl;
    cout << mathMarks[1] << endl;
    cout << mathMarks[2] << endl;
    cout << mathMarks[3] << endl; 

    //you can change the value of an array;
    marks[2] = 455;
     cout<<"These are marks"<<endl; 
     //cout<<marks[0] << endl;
    //cout<<marks[1] << endl;
    //cout<<marks[2] << endl;
    //cout<< marks[3] << endl;
    for (int i = 0; i < 4; i++)
    {
        cout<<"The value of marks"<<i<< "is" <<marks[i]<<endl;
    }
    
    // Quick quiz: do the same using while and do -loops?

    // Pointers and arrays
    int *p = marks;
    cout<<(*p++); 
     cout<<(*p); 
      cout<<*(++p); 
    // cout<<"The value of marks *p is"<<*p<<endl;
    // cout<<"The value of marks *(p+1) is"<<*(p+1)<<endl;
    // cout<<"The value of marks *(p+2) is"<<*(p+2)<<endl;
    // cout<<"The value of marks *(p+3) is"<<*(p+3)<<endl;
    return 0;
}