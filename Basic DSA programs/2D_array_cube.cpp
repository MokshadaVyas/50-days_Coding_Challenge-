#include<iostream>
using namespace std;

int cube(int *n)
{
    int result;
    result=(*n) * (*n) * (*n);
    return result;
}
int main()
{
    int size=2;
    int a[size][size]={{5,15},{25,35}};

    cout<<"elements are: ";
    for(int i=0;i<size;i++)
    {
        for(int j=0;j<size;j++)
        {
            cout<<a[i][j]<<" ";
        }
    }

    cout<<"\nCube of the elements:-"<<endl;
    for(int i=0;i<size;i++)
    {
        for(int j=0;j<size;j++)
        {
            cout<<cube(&a[i][j])<<endl;
        }
    }

    return 0;
}