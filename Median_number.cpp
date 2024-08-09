#include<iostream>
using namespace std;

void median(int arr[],int n)
{
    // To sort array
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                swap(arr[j],arr[j+1]);
            }
        }
    }

    // To find median
    double median;
    if(n % 2 != 0)
    {
        median=arr[n/2];
    }
    else
    {
        int mid1=arr[(n/2)-1];
        int mid2=arr[(n/2)];

        median=(mid1+mid2)/2;
    }
    cout<<"Median of the following array is "<<median<<endl;
}

int main()
{
    int arr[]={4,5,2,3,9,7,1,8};
    int n=sizeof(arr)/sizeof(arr[0]);
    median(arr,n);
    return 0;
}