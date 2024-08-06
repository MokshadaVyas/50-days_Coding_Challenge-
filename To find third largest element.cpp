#include<iostream>
using namespace std;
int max_number(int arr[],int n)
{
    int max=INT16_MIN;
    for(int i=0;i<n;i++)
    {
        if(max<arr[i])
        {
            max=arr[i];
        }
    }
    return max;
}

int second_Largest(int arr[],int n)
{
    int second_largest=INT16_MIN;
    int max=max_number(arr,n);
    for(int i=0;i<n;i++)
    {
        if(arr[i]<max && second_largest<arr[i])
        {
            second_largest=arr[i];
        }
    }
    return second_largest;
}

int third_largest(int arr[],int n)
{
    int third_max=INT16_MIN;
    int max=max_number(arr,n);
    int sec_max=second_Largest(arr,n);

    for(int i=0;i<n;i++)
    {
        if(arr[i]<max && arr[i]<sec_max && arr[i]>third_max)
        {
            third_max=arr[i];
        }
    }
        return third_max;
}
int main()
{
    int arr[]={1,2,6,7,7,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<"Third largest element is "<<third_largest(arr,n);
    return 0;
}
