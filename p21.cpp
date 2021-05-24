#include<iostream>
#include<string>
using namespace std;
class binary
{
    string s;

public:
    void read(void);
    void check(void);
    void ones(void);
    void display();
};
void binary::read(void)
{
    cout<<"Enter a binary number : ";
    cin>>s;

}
void binary::check(void)
{
    for(int i=0;i<s.length();i++)
    {
        if(s.at(i)!='0'&& s.at(i)!='1')
        {
            cout<<"Incorrect Binary format !"<<endl;
            exit(0);
        }
    }
}
void binary::ones(void)
{
    for(int i=0;i<s.length();i++)
    {
        if(s.at(i)=='1')
        {
            s.at(i)='0';
        }
        else
        {
            s.at(i)='1';
        }
    }

}
void binary::display(void)
{
    cout<<"Displayng Your Number : ";
    for(int i=0;i<s.length();i++)
    cout<<s.at(i);
}
int main()
{
    binary b;
    b.read();
    b.display();
    cout<<endl;
    b.check();
    b.ones();
    cout<<"AFTER ONE'S COMPLIMENT "<<endl;
    b.display();
}