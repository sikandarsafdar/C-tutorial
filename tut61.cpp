#include <iostream>
#include<fstream>
using namespace std; 

int main () {
     // // connecting our file with hout stream
     // ofstream hout("sample60.txt");
     // // created a name string and filling it with the string  entered by user
     // string name;
     // cout<<"Enter your name";
     // cin>>name;
     // // writing a string to the file
     // hout<<"My name is "+name;
     // hout.close();

ifstream hin("samle60.txt");
string content;
hin>>content;
cout<<"The content of this file is: "<<content;

     return 0;
}
