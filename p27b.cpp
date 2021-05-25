#include<iostream>
using namespace std;
class c2;
class c1{
    int val1;
    public:
        void indata(int a)
        {
            val1 =a;
        }
        void display(void)
        {
            cout<<val1<<endl;
        }
    friend void exchange(c1 & , c2 &);
};
class c2{
    int val2;
    
    public:
        void indata(int b)
        {
            val2 =b;
        }
        void display(void)
        {
            cout<<val2<<endl;
        }
    friend void exchange(c1 & , c2 &);
};
void exchange( c1 &x, c2 &y)
{
    int temp=y.val2;
    y.val2=x.val1;
    x.val1=temp;
}
int main()
{
    c1 o1;
    c2 o2;
    o1.indata(22);
    o2.indata(23);
    exchange(o1,o2);
    cout<<"The value after exchange becomes : ";
    o1.display();
    cout<<"The value after exchange becomes : ";
    o2.display();
    return 0;
    