#include<iostream>
using namespace std;
int main()
{
    int a[]={1,2,3,4,5,6,7};
    int oddCount=0 , evenCount=0;
    cout<<"Numbers are: "<<endl;
    for(int i=0;i<7;i++)
    {
        cout<<a[i]<<" ";
    }

    for(int i=0;i<7;i++)
    {
        if(a[i]%2==0)
        {
            evenCount++;
        }else
        {
            oddCount++;
        }
    }

    cout<<"Even numbers are:-"<<evenCount<<endl;
    cout<<"Odd numbers are:-"<<oddCount<<endl;
    

    return 0;
}
