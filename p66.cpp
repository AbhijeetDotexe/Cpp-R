#include<iostream>
using namespace std;
template<class T>
class Abhi
{
    public:
        T data;
        Abhi(T a)
        {
            data = a;
        }
        void disp();
};
template <class T>
void Abhi<T>::disp()
{
    cout<<data<<endl;
}

int main()
{
    Abhi<float> a(20.5);
    a.disp();
    cout<<endl;
    Abhi<int> l(4);
    l.disp();
    cout<<endl;
    return 0;

}