#include<iostream>
using namespace std;
int main()
{
    int a[10]={1,2,3,4,5,6,7,8,9,10};
    int sum=0,avg,i;
    cout<<"Numbers are:"<<endl;
    for(int i=0;i<10;i++)
    {
        cout<<a[i]<<" ";
    }
    for(int i=0;i<10;i++)
    { 
        sum=sum+a[i];
    }
    for(int i=0;i<10;i++)
    {
        avg=sum/10;
    }
    cout<<"\nsum is: "<<sum<<endl;
    cout<<"Average of the sum is: "<<avg<<endl;
    return 0;
}
