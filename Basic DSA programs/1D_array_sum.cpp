#include<iostream>
using namespace std;

int sum(int a[],int n)
{
    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum=sum+a[i];
    }
        return sum;
}
int main()
{
    int a[5];
    a[0]=5;
    a[1]=8;
    a[2]=9;
    a[3]=3;
    a[4]=6;

    cout<<"The sum of an Array: "<<sum(a,5);
    return 0;
}