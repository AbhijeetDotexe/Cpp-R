#include<iostream>
using namespace std;
template<class T1, class T2>
float avg(T1 a, T2 b)
{
    float average = (a+b)/2;
    return average;
}
// float avg2(int a, float b)
// {
//     float average = (a+b)/2;
//     return average;
// }
int main()
{
    float a,b,c;
    a = avg(4,20);
    cout<<a<<endl;
    b=avg(4,20.5);
    cout<<b<<endl;
    c = avg(4.2131,7.2131);
    cout<<c<<endl;
    return 0;
}