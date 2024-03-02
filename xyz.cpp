#include<iostream>
using namespace std;
int main()
{
    int **a;
    int i,j,n,x;
    cout<<"Enter dimension: ";
    cin>>n;

    // Allocate Memory in heap
    a=new int*[n];

    // Allocate memory for each row 
    for(i=0;i<n;i++)
    {
        a[i] = new int[n];
    }

    // To enter elements in matrix
    cout<<"Enter elements:"<<endl;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
           cin>>a[i][j];
        }
    }

    // Display Matrix
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i>=j)
            {
                cout<<a[i][j]<<" ";
            }
            else
            {
                cout<<"0 ";
            }
        }
        cout<<endl;
    }

    // Deallocate memory from heap
    for (i = 0; i < n; i++)
    {
        delete[] a[i];
    }
    delete[] a;
    return 0;
}