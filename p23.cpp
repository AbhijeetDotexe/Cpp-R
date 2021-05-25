#include <iostream>
using namespace std;
class Employee
{
    int id;
    static int count; // Default value is 0
public:
    void setdata(void)
    {
        cout << "Enter the id of the employee : ";
        cin >> id;
        count++;
    }
    void getdata(void)
    {
        cout << "The id of the employee is  " << id << " and the employee number is  " << count << endl;
    }
    static void getcount(void)
    {
        cout<<"The value of count is "<<count<<endl;
    }
};
int Employee::count;
int main()
{
    Employee Priyanshu;
    Employee Lakshay;
    // cannot use id and count because they are private in the class employee by default
    Lakshay.setdata();
    Lakshay.getdata();
    Employee::getcount(); // Using static member functions 
    cout << endl;
    Priyanshu.setdata();
    Priyanshu.getdata();
    Employee::getcount();
    return 0;
} 