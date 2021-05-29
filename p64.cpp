#include<iostream>
using namespace std;
template<class T1 = int, class T2 = float>
class Lakshay
{
    public:
        T1 a;
        T2 b;
        Lakshay(T1 x, T2 y)
        {
            a = x;
            b = y;
        }
        void display()
        {
            cout<<"The value of a is "<<a<<" and the value of b is "<<b<<endl;
        }
};
int main()
{
    Lakshay<> l(4,20.5);
    l.display();
    cout<<endl;
    Lakshay<float,int> P(4.5,20);
    P.display();
    return 0;
}