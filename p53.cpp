#include<iostream>
using namespace std;
class Base
{
    public:
        int var1;
        virtual void display()
        {
            cout<<"Displaying base class variable var1 = "<<var1<<endl;
        }
};
class Derived: public Base
{
    public:
        int var2;
        void display()
        {
            cout<<"Displaying Derived class variable var2 = "<<var2<<endl;
        }

};
int main()
{
    Base *basepoint;
    Base obj;
    Derived objd;
    basepoint = &objd;
    basepoint ->display();
    return 0;
}