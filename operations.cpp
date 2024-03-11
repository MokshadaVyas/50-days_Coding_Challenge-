#include<iostream>
using namespace std;
int main()
{
    int arr[5];
    int x,n;
    cout<<"enter the number of elements: ";
    cin>>n;
    cout<<"enter the elements: ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"enter a new element: ";
    cin>>x;
    arr[n]=x;
    n++;
    cout<<"New array: ";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i];
    }
    

    return 0;
}