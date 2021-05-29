#include<iostream>
using namespace std;
class Base
{
    public:
        int var1;
        void disp()
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
    Base *basepointer;
    Base obj;
    Derived objD;
    basepointer = &objD; // Pointing base class pointer to derived class
    basepointer->var1 = 23;
    basepointer->disp();
    Derived *derivedpointer;
    derivedpointer->var2 = 22;
    derivedpointer->display();
    
    
    return 0;
}