#include<iostream>
#include<math.h>
using namespace std;
class  point 
{
    int x,y;
    friend void distance(point o1, point o2);
    public:
        point(int a , int b)
        {
            x=a;
            y=b;
        }
        void display()
        {
            cout<<"The point is ("<<x<<","<<y<<") "<<endl;
        }
};
void distance(point o1, point o2)
{
    int xd=o2.x-o1.x;
    int yd=o2.y-o1.y;
    float dist=sqrt(pow(xd,2)+pow(yd,2));
    cout<<"The distance between the two points is : "<<dist<<endl;
}
int main()
{
    point p(22,23);
    point q(20,4);
    p.display();
    q.display();
    distance(p,q);
    return 0;
}