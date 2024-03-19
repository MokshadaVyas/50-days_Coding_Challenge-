#include<iostream>
using namespace std;

int avgArray(int a[],int size)
{
    int sum,i,avg;
    sum=0;
    for(int i=0;i<size;i++)
    sum=sum+a[i];
    avg=sum/size;
    cout<<"Average number is "<<avg<<endl;
    return sum;
}
int main()
{
    int *a,size;
    cout<<"Enter size"<<endl;
    cin>>size;
    a=new int [size];
    cout<<"Enter elements: "<<endl;
    for(int i=0;i<size;i++)
    {
        cin>>a[i];
    }

    cout<<"sum of these elements is : "<<avgArray(a,size)<<endl;
    delete[] a; 

    return 0;
}