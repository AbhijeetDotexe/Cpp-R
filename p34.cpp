#include<iostream>
using namespace std;
class bank
{
  int principal;
  int years;
  float intrestrate;
  float returnvalue;
  public:
    bank(){}
    bank(int p, int y, float r);
    bank(int p, int y, int r);
    void show();
};
bank::bank(int p,int y,float r)
{
    principal=p;
    years=y;
    intrestrate=r;
    returnvalue=principal;
    for(int i=0;i<y;i++)
    {
        returnvalue=returnvalue*(1+r);
    }
}
bank::bank(int p,int y,int r)
{
    principal=p;
    years=y;
    intrestrate=float(r)/100;
    returnvalue=principal;
    for(int i=0;i<y;i++)
    {
        returnvalue=returnvalue*(1+intrestrate);
    }
}
void bank::show()
{
    cout<<"Principal amout was "<<principal<<" Return value after "<<years<<" year is "<<returnvalue<<endl;
}

int main()
{
    bank b1,b2,b3;
    int p,y,R;
    float r;
    cout<<"Enter the principal amount : "<<endl;
    cin>>p;
    cout<<"Enter the Number of year "<<endl;
    cin>>y;
    cout<<"Enter the intrest rate "<<endl;
    cin>>r;
    cout<<"Enter the integer value of intrest "<<endl;
    cin>>R;
    b1=bank(p,y,r);
    b1.show();
    b2=bank(p,y,R);
    b2.show();

    return 0;
}