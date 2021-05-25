#include<iostream>
using namespace std;
class Employee
{
    int id ;
    int salary;
    public:
        void setid(void)
        {
            salary=34000;
            cout<<"Enter id of the employee : ";
            cin>>id;
        }
        void getid(void)
        {
            cout<<"The id of the employee is : "<<id<<endl;
        }
};
int main()
{
    /*Employee Lakshay,Priyanshu,Abhijeet;
    Lakshay.setid();
    Lakshay.getid();
    */
   Employee a[3];
   for(int i=0;i<3;i++)
    {
        a[i].setid();
        a[i].getid();
        cout<<endl;
    }


    return 0;
}