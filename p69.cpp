//Map is used to store key value pair
#include<iostream>
#include<map>
#include<string>
using namespace std;
// Map is an associative array
int main()
{
    map<string, int>marksMap;
    marksMap["Lakshay"] = 91;
    marksMap["Priyanshu"] = 93;
    marksMap["Abhijeet"] = 90;
    map<string, int>::iterator itr;
    for(itr=marksMap.begin();itr!=marksMap.end();itr++)
    {
        cout<<(*itr).first<<" "<<(*itr).second<<"\n";
    }
    cout<<"The size is "<<marksMap.size();
    return 0;
}