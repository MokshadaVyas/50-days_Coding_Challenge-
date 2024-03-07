#include<iostream>
using namespace std;
int main()
{
    int a[10],i;
    bool divisible=false;
    cout<<"Enter Number: "<<endl;

    for(int i=0;i<10;i++)
    {
        cin>>a[i];
        if(a[i]%6==0)
        {
            divisible=true;
            break;
        }
    }

    if(divisible)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
}