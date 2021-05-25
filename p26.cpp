#include<iostream>
using namespace std;
class Complex;
class calculator
{
    public:
        int add(int a,int b)
        {
            return (a+b);
        }
        int sumr(Complex o1,Complex o2);
        int sumc(Complex o1,Complex o2);
};

class Complex{
        int a;
        int b;
        friend int calculator::sumr(Complex o1,Complex o2);
        friend int calculator::sumc(Complex o1,Complex o2);
        // U can also decalre the whole class as friend class 
        public:
            void setnumber(int n1,int n2)
            {
                a=n1;
                b=n2;
            }
            void print(void)
            {
                cout<<"Your number is "<<a<<" + "<<b<<"i"<<endl;
            }
};
 int calculator :: sumr(Complex o1,Complex o2)
{
    return (o1.a+o2.a);
}
 int calculator :: sumc(Complex o1,Complex o2)
{
    return (o1.b+o2.b);
}
       
int main()
{   
    Complex o1,o2;
    o1.setnumber(2,5);
    o2.setnumber(4,7);
    calculator cal;
    int resr=cal.sumr(o1,o2);
    int resc=cal.sumc(o1,o2);
    cout<<"The sum of real parts of the complex number is : "<<resr<<endl;
    cout<<"The sum of real parts of the complex number is : "<<resc<<endl;

    return 0;
}
