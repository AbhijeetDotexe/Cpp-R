#include<iostream>
#include<functional>
#include<algorithm> // For function objects
using namespace std;
int main()
{
    // Function object : function wrapped in a class, so that it is available like an object
    int arr[] = {31,12,40,5,98,2,67};
    //sort(arr,arr+7);
    sort(arr,arr+7,greater<int>()); //For descending order
    for(int i = 0;i<7;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
    
}