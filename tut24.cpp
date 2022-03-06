#include <iostream>
using namespace std;

class Employee
{
     int id;
     static int count; // default value is 0

public:
     void setData(void)
     {
          cout << "Enter the id" << endl;
          cin >> id;
          count++;
     }
     void getData(void)
     {
          cout << "The id of this employee is" << id << "and this is employee number" << count << endl;
     }
     static void getCount(void)
     {
          cout<<id;//throws an error
          cout << "The value of count is" << count << endl;
     }
};

// count is the static data  member of class Employee
int Employee::count; // default value is 0
int main()
{
     Employee harry, sikandar, zubair;
     // harry.id =1;
     // harry.count = 1;//cannot do this as id and count are private

     harry.setData();
     harry.getData();
     Employee::getCount();

     sikandar.setData();
     sikandar.getData();
     Employee::getCount();

     zubair.setData();
     zubair.getData();
     Employee::getCount();
     system("pause");
     return 0;
}