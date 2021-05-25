#include<iostream>
using namespace std;
class complex {
    // constructor is a special member function used to initialze the memebers of the class it has the same name as class name
    int  a,b;
    public:
        complex (void);
        void printnumber()
        {
            cout<<"Your complex number is : "<<a<<" + "<<b<<"i"<<endl;
        }
};
complex :: complex(void)
{
    a=10;
    b=5;
}
int main()
{
    complex c;
    c.printnumber();
    return 0;
}

/*
 constructor can be of many types such as default constructor(It takes no arguments ) or parameterized constructor
    1. It should be declared in the public section of the class 
    2. They are automatically invoked whenever the object is created 
    3. They do not return any value and do not have any return types 
    4. It can have default arguments 
    5. We cannot refer to their arguments
*/ 