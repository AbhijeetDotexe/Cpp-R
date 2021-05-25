// Inheritance in C++
#include<iostream>
using namespace std;
class Employee // Base class 
{
    public:
        int id;
        float salary;
        Employee(int inpid)
        {
            id=inpid;
            salary=23.0;
        }
        Employee(){}
};
// class {{derived-class-name}} : {{visibility-mode}} {{base-class-name}}  syntax for derived class
// Default visibilty mode is private 
// private visibilty mode : public memebers of the base class becomes private memebers of the derived class
// Private members of the base class can never be inherited 
class Programmer : public Employee
{
    public:
        Programmer(int inpid )
        {
            id = inpid;
        }
        int languageCode = 9;
        void getdata()
        {
            cout<<id<<endl;
        }
};
int main()
{
    Employee Lakshay(1), Priyanshu(2);
    cout<<Lakshay.salary<<endl;
    cout<<Priyanshu.salary<<endl;
    Programmer Shaani(3);
    Shaani.getdata();
    cout<<endl;
    cout<<Shaani.languageCode<<endl;
    cout<<Shaani.id;
    return 0 ;
}

