#include<iostream>
using namespace std;
class simple
{
    int data1;
    int data2;
    public:
        simple(int x,int y=5)
        {
            data1=x;
            data2=y;
        }
        void display();
};
void simple::display()
{
    cout<<"The value of data is "<<data1<<" and "<<data2<<endl;
}
int main()
{
    simple s(20,4);
    s.display();
    simple t(20);
    t.display();;
    return 0;
}