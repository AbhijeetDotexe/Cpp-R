#include<iostream>
using namespace std;
/*
For a protected member :

                                Public derivation          Private derivation              Protected derivation
    
    1. Private members          Not inherited               Not inherited                   Not inherited
    2. Protected members        Protected                   Private                         Protected
    3. Public members           Public                      Private                         Protected

*/
class Base
{
    protected:
        int a;
    private:
        int b;

};
class Derived : protected Base
{

};

int main()
{
    Base b;
    Derived d;
    //cout<<b.a<<endl; 
    // Will not work because a is protected in base as well as derived class
    return 0;

}