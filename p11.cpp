#include<iostream>
using namespace std;
int main()
{   
    struct employee
    {
        int id;
        float salary;
        float department;
    };
    struct employee lakshay;
    lakshay.id=2;
    lakshay.department = 4;
    lakshay.salary=120000000;
    cout<<lakshay.id<<endl;
    cout<<lakshay.department<<endl;
    cout<<lakshay.salary<<endl;
    return 0;
}