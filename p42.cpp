#include<iostream>
using namespace std;
class Base1
{
    public:
        void greet()
        {
            cout<<"How are you ? "<<endl;
        }
};
class Base2
{
    public:
        void greet()
        {
            cout<<"What are you doing ? "<<endl;
        }
};
class Derived : public Base1, public Base2
{
    int a;
    public:
        void greet()
        {
            Base1::greet(); // To solve the ambiguity error in the derived class we use this 
        }
};
class B
{
    public:
        void say()
        {
            cout<<"Hello World ! "<<endl;
        }
};
class D
{
    int a;
    public:
        void say() // If this function was not present then it will inherit from the above class automatically but it will overwrite if you create a function with the same name
        {
            cout<<"How are you all doing !"<<endl;
        }
};
int main()
{
   /* 
    Base1 base1obj;
    Base2 base2obj;
    base1obj.greet();
    base2obj.greet();
    Derived d;
    d.greet();
   */ 
    B b;
    b.say();
    D d;
    d.say();
    return 0;
}