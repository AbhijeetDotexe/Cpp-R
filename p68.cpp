#include<iostream>
#include<list>
using namespace std;
void display(list<int> &lst)
{
    list<int>::iterator it;
    for(it=lst.begin();it!=lst.end();it++)
    {
            cout<<*it<<" ";
    }
    cout<<endl;
}
int main()
{
    list<int> list1; // list of 0 length
    list<int>list2(3);//Empty list of size 7
    list1.push_back(5);
    list1.push_back(2);
    list1.push_back(1);
    list1.push_back(4);
    list1.push_back(9);
    list1.push_back(8);
    list1.sort();
    display(list1);
    // list1.pop_back();
    // display(list1);
    // list1.pop_front();
    // display(list1);
    list<int>::iterator iter;
    iter = list2.begin();
    *iter = 22;
    iter ++;    
    *iter = 23;
    iter ++;    
    *iter = 24;
    iter ++;  
    display(list2);
    list1.merge(list2);
    cout<<"List 1 after merging with list 2 "<<endl;
    display(list1);  
    list1.reverse();
    display(list1);
    return 0;
}