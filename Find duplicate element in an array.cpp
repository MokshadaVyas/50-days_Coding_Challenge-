#include<iostream>
using namespace std;
int main()
{
    // To create an array
    int *a,size;
    cout<<"Enter size of an array: ";
    cin>>size;
    a=new int[size];
    cout<<"Enter elements of an array: "<<" "<<endl;
    for(int i=0;i<size;i++)
    {
        cin>>a[i];
    }

    // To find duplicate
    int last_duplicate=0;
    for(int i=0;i<size;i++)
    {
        if(a[i]==a[i+1] && a[i]!=last_duplicate)
        {
            cout<<"Duplicate number is:- "<<a[i]<<endl;
            last_duplicate=a[i];
        }
    }
    return 0;
}
