// Multilevel inheritance
#include<iostream>
using namespace std;
class Student
{
    protected:
        int rollno;
    public:
        void set_rollno(int);
        void get_rollno(void);
};
void Student :: set_rollno(int r)
{
    rollno = r;
}
void Student :: get_rollno()
{
    cout<<"Your roll Number is  : "<<rollno<<endl;
}

class Exam : public Student
{
    protected:
        float maths;
        float physics;
    public:
        void set_marks(float,float);
        void get_marks(void);
};
void Exam :: set_marks(float m1, float m2)
{
    maths= m1;
    physics = m2;
}
void Exam :: get_marks()
{
    cout<<"The marks obtained in maths are : "<<maths<<endl;
    cout<<"The marks obtained in Physics are : "<<physics<<endl;    
}

class Result : public Exam
{
    float percentage;
    public:
        void display()
        {
            get_rollno();
            get_marks();
            cout<<"Your Result is : "<<(maths+physics)/2<<" % "<<endl;
        }
};

int main()
{
    Result Lakshay;
    Lakshay.set_rollno(23);
    Lakshay.set_marks(95,97);
    Lakshay.display();
    return 0;
}

/*
    If we are inheriting B from A and C from B
    1. A is the base class for B and B is the base class for C
    2. ABC is called inheritance path
*/