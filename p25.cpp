// Friend function
#include<iostream>
using namespace std;
class Complex{
        int a;
        int b;
        public:
            void setnumber(int n1,int n2)
            {
                a=n1;
                b=n2;
            }
            friend Complex sumcomplex(Complex o1,Complex o2); // Declaration of friend class it is still not part of the class 
            void print(void)
            {
                cout<<"Your number is "<<a<<" + "<<b<<"i"<<endl;
            }
};
Complex sumcomplex(Complex o1,Complex o2)
{
    Complex o3;
    o3.setnumber((o1.a+o2.a),(o1.b+o2.b));
    return o3;

}
int main()
{   
    Complex c1,c2,sum;
    c1.setnumber(1,4);
    c2.setnumber(5,8);
    c1.print();
    c2.print();
    sum=sumcomplex(c1,c2);
    sum.print();
    return 0;
}
/*
    Properties of friend function :-
    1. Not in the scope of the class 
    2. Since it is not in the scope of the class, it cannot be called from the object of that class 
    3. can be invoked without the help of any object
    4. usually contains the object as arguments 
    5. can be declared inside the publice or private section of the class
    6. It cannot access members directly by their name and need onject name 
*/