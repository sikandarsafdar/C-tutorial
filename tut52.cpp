#include <iostream>
using namespace std; 
class ShopItem{
int id;
float price;
public:
void setData(int a,float b){
    id = a;
    price = b;
}
void getData(){
    cout<<"Code of this item is"<<id<<endl;
    cout<<"Price of this item is"<<price<<endl;
}
};
    // 1 2 3
    // ^
    // |
    // |
    // ptr
    // ptr Temp

int main () {
    int size = 3;
    //int *ptr = &size;

   // int *ptr = &size;
    // int *ptr = new int [34];

    // general store 
    // veggies
    // haerdware
     ShopItem *ptr = new ShopItem[size];
     ShopItem *ptrTemp = ptr;
     int p,i;
     float q;
     for (int i = 0; i < size; i++)
     {
        cout<<"Enter Id and price of item"<<i+1<<endl;
        cin>>p>>q;
        // (*ptr).setData(p,q);
        ptrTemp->setData(p,q);
        ptrTemp++;
     }
     for ( i = 0; i < size; i++)
     {
    cout<<"Item number is "<<i+1<<endl;
    ptr->getData();
      }
     
     
     return 0; 
}

