#include<iostream>
using namespace std;
class Base
{
    int data;
    public:
        Base(int i)
        {
            data = i;
            cout<<"Base class 1 constructor called "<<endl;
        }
        void printdata(void)
        {
            cout<<"The value of data is : "<<data<<endl;
        }
};
class Base2
{
    int data2;
    public:
        Base2(int i)
        {
            data2 = i;
            cout<<"Base class 2 constructor called "<<endl;
        }
        void printd2(void)
        {
            cout<<"The value of data is : "<<data2<<endl;
        }

};
class Derived: public Base, public Base2
{
    int derived1, derived2;
    public:
        Derived(int a, int b, int c, int d): Base(a), Base2(b)
        {
            derived1 = c;
            derived2 = d;
            cout<<"Derived class constructor called "<<endl;
        }
        void printd(void)
        {
            cout<<"The value of derived 1 is : "<<derived1<<endl;
            cout<<"The value of derived 2 is : "<<derived2<<endl;
        }
};
int main()
{
    Derived Lakshay(22,23,4,20);
    Lakshay.printdata();
    Lakshay.printd2();
    Lakshay.printd();
    return 0;
}