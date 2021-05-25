// Parameterized constructor
#include<iostream>
using namespace std;
class complex {

    int  a,b;
    public:
        complex (int x,int y); // This is a parameterized constructor it takes two arguments 
        void printnumber()
        {
            cout<<"Your complex number is : "<<a<<" + "<<b<<"i"<<endl;
        }
};
complex :: complex(int x,int y)
{
    a=x;
    b=y;
}
int main()
{
    //Implicit call
    complex c(22,23);
    c.printnumber();

    //Explicit call
    complex b= complex(2000,2016);
    b.printnumber();
    return 0;
}
