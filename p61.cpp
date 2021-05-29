#include<fstream>
#include<iostream>
using namespace std;
int main()
{
    ofstream out;
    out.open("sample.txt");
    out<<"This is me and my name is Abhijeet Rana"<<endl;
    out<<"How are you all doing "<<endl;
    out<<"I hope you all are fine "<<endl;
    out.close();
    ifstream in;
    in.open("sample.txt");
    string st;
    //getline(in,st);
    while(in.eof()==0) // eof = end of file
    {
        getline(in, st); //while loop to print multiple lines in a text file
        cout<<st<<endl;
    }
    //cout<<"The content of the files are "<<st<<endl;
    in.close();
    return 0;
}