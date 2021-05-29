// STL = Containers + Algorithms + Iterators
//containers = objects which stores data(Sequence, Associative and Derived containers)
//algorithm = procedure to process data
//Iterators = objects which points to an element of a container
#include<iostream>
#include<vector>
using namespace std;
void display(vector<int> &v)
{
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
int main()
{
    vector<int> vec1; // Zero length vector
    vector<char> vec2(4); // 4- element character vector 
    vector<char> vec3(vec2); // 4- element character vector from vec2
    vector<int> v(6,3); // 6-element of vector 3s
    display(v);
    int ele,s;
    cout<<"Enter the size of the vector : ";
    cin>>s;
    for(int i=0;i<s;i++)
    {
        cout<<"Enter an element to add to this vector "<<endl;
        cin>>ele;
        vec1.push_back(ele);
    }
    cout<<"\n\n";
    //vec1.pop_back(); deletes the last element from the vector
    display(vec1);
    vector<int> ::iterator iter = vec1.begin();
    vec1.insert(iter, 23);
    display(vec1);
    return 0;
}