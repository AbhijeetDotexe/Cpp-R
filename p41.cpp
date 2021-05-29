#include <iostream>
using namespace std;
class Base1
{
protected:
    int base1;

public:
    void set_base1(int a)
    {
        base1 = a;
    }
};
class Base2
{
protected:
    int base2;

public:
    void set_base2(int b)
    {
        base2 = b;
    }
};
class Derived : public Base1, public Base2
{
public:
    void show()
    {
        cout << "The value of Base1 is : " << base1 << endl;
        cout << "The value of Base2 is : " << base2 << endl;
        cout << "The Sum of Base1 and Base2 is : " << base2 + base1 << endl;
    }
};
int main()
{
    Derived Lakshay;
    Lakshay.set_base1(22);
    Lakshay.set_base2(23);
    Lakshay.show();
    return 0;
}
