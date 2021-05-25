#include<iostream>
using namespace std;
class y;
class x{
    int data ;
    public:
        void setValue(int value)
        {
            data=value;
        }
    friend void add(x,y);
};
class y{
    int data ;
    public:
        void setValue(int value)
        {
            data=value;
        }
    friend void add(x,y);
};
void add(x o1,y o2)
{
    cout<<"The sum of data of x and y is : "<<o1.data+ o2.data<<endl;
}
int main()
{
    x a1;
    y a2;
    a1.setValue(4);
    a2.setValue(8);
    add(a1,a2);
    return 0;
}