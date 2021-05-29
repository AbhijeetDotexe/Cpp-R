#include<iostream>
#include<cmath>
using namespace std;
class SimpleCal
{
    int a,b;
    public:
        void getsi()
        {
            cout<<"Enter the value of a : "<<endl;
            cin>>a;
            cout<<"Enter the value of b : "<<endl;
            cin>>b;
        }
        void performopsi()
        {
            cout<<"The value of a + b is : "<<a + b <<endl;
            cout<<"The value of a - b is : "<<a - b <<endl;
            cout<<"The value of a * b is : "<<a * b <<endl;
            cout<<"The value of a / b is : "<<a / b <<endl;
        }
};
class Scientific 
{
    int a,b;
        public:
        void getsci()
        {
            cout<<"Enter the value of a : "<<endl;
            cin>>a;
            cout<<"Enter the value of b : "<<endl;
            cin>>b;
        }
        void performopsc()
        {
            cout<<"The value of cos(a) is : "<<cos(a)<<endl;
            cout<<"The value of sin(b) is : "<<sin(b) <<endl;
            cout<<"The value of exp(b) is : "<<exp(b) <<endl;
            cout<<"The value of tan(a) is : "<<tan(a)<<endl;
        }
};
class Hybridcal : public SimpleCal, public Scientific
{

};
int main()
{
    Hybridcal calc;
    calc.getsci();
    calc.getsi();
    calc.performopsc();
    calc.performopsi();
    return 0;
}