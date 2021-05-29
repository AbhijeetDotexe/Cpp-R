// Initializing Constructors
#include<iostream>
using namespace std;
/* Syntax for initializing a constructor
    Constructor(arguments): initialization section
    {
        assignment + other code;
    }
*/
class Test
{
    int a;
    int b;
    public:
        //Test(int i, int j): a(i), b(j)
       // Test(int i, int j): a(i*2), b(j)
       // Test(int i, int j): b(j), a(i+b)    This will print a garbage value of a because order matters when creating the object of the class 

        Test(int i, int j): a(i*2), b(a+j)
        {
            cout<<"Value of a and b is "<<a<<" and "<<b<<" respectively"<<endl;
            cout<<"Constructor executed "<<endl;
        }
};
int main()
{
    Test t(4,20);
    return 0;
}