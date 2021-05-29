#include<iostream>
using namespace std;
/*
Class template with multiple parameters it can be more than two also
template<class T1, class T2>
class name of class
{
    body
};
*/
template<class T1, class T2>
class myclass
{
    public:
        T1 data1;
        T2 data2;
        myclass(T1 a, T2 b)
        {
            data1 = a;
            data2 = b;
        }
        void display()
        {
            cout<<this->data1<<endl<<this->data2<<endl;
        }
};
int main()
{
    myclass <int, char>obj(4,'A');
    obj.display();
    return 0;
}