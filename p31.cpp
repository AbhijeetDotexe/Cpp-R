#include<iostream>
using namespace std;
class complex {

    int  a,b;
    public:
        complex (void);
        void printnumber()
        {
            cout<<"Your complex number is : "<<a<<" + "<<b<<"i"<<endl;
        }
        complex(int x)
        {
            a=x;
            b=0;
        }        
        complex(int x,int y)
        {
            a=x;
            b=y;
        }
};
complex :: complex(void)
{
    a=0;
    b=0;
}
int main()
{
    complex c;
    c.printnumber();
    complex d(5);
    d.printnumber();
    
    complex e(9,10);
    e.printnumber();
    
    
    return 0;
}
