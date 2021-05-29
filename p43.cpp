// Virtual base class 
#include<iostream>
using namespace std;
class Student
{
    protected:
        int rollno;
    public:
        void setnumber(int a)
        {
            rollno = a;
        }
        void printnum(void)
        {
            cout<<"Your roll number is : "<<rollno<<endl;
        }
};
class Test : virtual public Student
{
    protected:
        float maths,physics;
        public:
            void set_marks(float n, float m)
            {
                maths=n;
                physics=m;
            }
            void printmarks(void)
            {
                cout<<"You have obtained "<<maths<<" Marks in Maths and "<<physics<<" Marks in Physics "<<endl;
            }
};
class Sports : virtual public Student
{
    protected:
        float score;
    public:
        void set_score(float s)
        {
            score = s;
        }
        void print_score(void)
        {
            cout<<"Your P.T score is : "<<score<<endl;
        }
};
class Result : public Test, public Sports
{
    private:
        float Total;
    public:
        void display(void)
        {
            Total = maths + physics + score;
            printnum();
            printmarks();
            print_score();
            cout<<"Your Total score is : "<<Total<<endl;
        }
};
int main()
{
    Result Lakshay;
    Lakshay.setnumber(23);
    Lakshay.set_marks(90,95);
    Lakshay.set_score(9);
    Lakshay.display();
    return 0;
}