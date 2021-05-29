#include<iostream>
#include<fstream>
using namespace std;
/*
    The useful classes for working with files in c++ are :
    1. fstreambase
    2. ifstream (derived from fstreambase) 
    3. ofstream (derived from fstreambase) 

    In order to work with files in c++ you will have to open it. There are two ways to open files in cpp
    1. using the constructor
    2. using a member function open() of the class
*/
int main()
{
    // Opening the file using constructor
    // writing in the string
    // string st = "Hello everyone";
    // ofstream out("sample.txt");
    // out<<st;

// Opening the file using constructor and reading it
    string st2;
    ifstream in("sampleb.txt");
    //in>>st2;
    getline(in, st2); // This reads the whole line u have to use this multiple files to read multiple lines 
    cout<<st2;
    return 0;
}