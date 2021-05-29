#include<iostream>
using namespace std;
class Shop
{
    int id;
    float price;
    public:
        void setdata(int a, float b)
        {
            id = a;
            price = b;
        }
        void disp(void)
        {
            cout<<"Code of the item is : "<<id<<endl;
            cout<<"and price for this item is : "<<price<<endl;
        }
};
int main()
{
    int size = 3;
    int p;
    float q;
    Shop *ptr = new Shop[size];
    Shop *ptritem = ptr;
    for(int i = 0;i<size;i++)
    {
        cout<<"Enter Id and price of item "<<i+1<<endl;
        cin>>p>>q;      
        ptr->setdata(p,q) ;
        ptr++;
    }
    for(int j=0;j<size;j++)
    {
        cout<<"Item number is : "<<j+1<<endl;
        ptritem->disp();
        ptritem++;
    }
    return 0;

}