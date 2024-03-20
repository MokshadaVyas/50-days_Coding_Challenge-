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


// second method
#include <iostream>
using namespace std;
double average(int a[], int n)
{
	int sum = 0;
	for (int i=0; i<n; i++)
	sum += a[i];

	return (double)sum/n;
}

int main()
{
	int arr[] = {10, 2, 3, 4, 5, 6, 7, 8, 9};
	int n = sizeof(arr)/sizeof(arr[0]);

	cout << average(arr, n) << endl;
	return 0;
}
