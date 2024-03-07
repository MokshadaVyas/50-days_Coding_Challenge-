#include<iostream>
using namespace std;
int main()
{
    int a[6]={1,2,3,4,5,6};
    cout<<"Numbers are: "<<" ";
    for(int i=0;i<6;i++)
    {
        cout<<a[i]<<" ";
    }

    cout<<"\nEven numbers are: "<<endl;
    for(int i=0;i<6;i++)
    {
        if(a[i]%2==0)
        {
            cout<<a[i]<<" ";
        }
    }

    cout<<"\nOdd numbers are: "<<endl;
    for(int i=0;i<6;i++)
    {
        if(a[i]%2!=0)
        {
            cout<<a[i]<<" ";
        }
    }

    return 0;
}