#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ofstream aout("sample.txt");
    string name;
    cout<<"Enter your name "<<endl;
    cin>>name;
    aout<<"My name is " + name;
    aout.close();
    ifstream ain("sample.txt");
    string content;
    //ain>>content;
    getline(ain, content);
    cout<<"The content of the file is "<<content<<endl;
    ain.close();
    return 0;
}