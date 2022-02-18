#include <iostream>

using namespace std;

int c = 45;

int main()
{
    //***********Build in data types************//
    //int   a,b,c;

    //cout<<"Enter the vlue of a:"<<endl;
    //cin>>a;
    //cout<<"Enter the vlue of b:"<<endl;
    //cin>>b;
    //c =a + b ;
    //cout<<"The sum is"<<c<<endl;
    //cout<<"The glbal c is"<<::c;
    // float d = 34.4f;
    //***********Float,double and Long doubles Literals************//

    // long double e = 34.4l;
    //cout<<"The size of 34.4l is"<<sizeof(34.4l)<<endl;
    //cout<<"The size of 34.4f is"<<sizeof(34.4f);
    // cout << "The vaue of d is" << d << endl;
    //<< "the valueof e is" << e;

    //***********Referance variables************//

    //float x=455;
    // float & y=x;
    // cout<<x<<endl;
    // cout<<y<<endl;

    //***********Typecasting************//
    int a = 45;
    float b=45.46;
    cout << "The value of a is " <<(float) a<<endl;

     cout << "The value of b is " <<(int) b<<endl;
       cout << "The value of a is " <<float(a)<<endl;
       cout << "The value of a is " <<int(b)<<endl;
     int c = int(b);

     cout<<"the expression is"<< a + b<<endl;
     cout<<"the expression is"<< a + int(b)<<endl;
      cout<<"the expression is"<< a + (int)b <<endl;
    return 0;
}