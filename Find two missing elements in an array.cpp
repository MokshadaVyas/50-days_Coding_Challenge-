#include<iostream>
using namespace std;
int main()
{
    int a[]={1,2,3,5,6,8,9,10};
    int n=8;
    int diff=1-0;
    for(int i=0;i<n;i++)
    {
        if(a[i]-i!=diff)
        {
            while(diff<a[i]-i)
            {
            cout<<i+diff<<endl;
            diff++;
            }
        }
    }
    return 0;
}
