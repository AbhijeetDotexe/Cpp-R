#include <iostream>
using namespace std;
// Destructor doesn't take any argument nor does it return any value
int count = 0;
class Num
{
public:
    Num()
    {
        count++;
        cout << "This is the time when the constructor is called for the object Number : " << count << endl;
    }
    ~Num()
    {
        cout << "This is the time when my destructor is called for object Number : " << count << endl;
        count--;
    }
};
int main()
{
    cout << "We are inside our main function " << endl;
    cout << "Creating first object n1 " << endl;
    Num n1;
    {
        cout << "\nEntering this block " << endl;
        cout << "Creating two more objects " << endl;
        Num n2, n3;
        cout << "Exiting this block \n" << endl;
    }
    cout << "Back to main " << endl;
    return 0;
}
