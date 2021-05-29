#include<iostream>
using namespace std;
class A
{
    int a;
    public:
       // A& setdata(int a)
        void setdata(int a)
        {
            // a = a; This will not work and will give u a garbage value
            this->a=a;
            //return *this;
        }
        void getdata()
        {
            cout<<"The value of a is "<<a<<endl;
        }
};
int main()
{
    // this keyword which is a pointer which points to the object which invokes the member function
    A a;
    a.setdata(4);
    a.getdata();
    return 0;
}