// Object oriented programming
#include<iostream>
using namespace std;
class employee
{
    private:
        int a,b,c;
    public:
        int d,e;
        void setdata(int a,int b,int c); // Decalration of function only 
        void getdata(){
            cout<<"The value of a is : "<<a<<endl;
            cout<<"The value of b is : "<<b<<endl;
            cout<<"The value of c is : "<<c<<endl;
            cout<<"The value of d is : "<<d<<endl;
            cout<<"The value of e is : "<<e<<endl;
        }
};
void employee :: setdata(int a1 ,int b1, int c1)
{
    a=a1;
    b=b1;
    c=c1;
}
int main()
{
    employee Lakshay;
    Lakshay.e=9;
    Lakshay.d=10;
    Lakshay.setdata(6,7,8);
    Lakshay.getdata();
    return 0;
}
