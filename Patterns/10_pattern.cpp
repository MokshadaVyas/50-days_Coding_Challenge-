/*
Enter number of rows:
5
*
**
***
****
*****
****
***
**
*
*/

#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter number of rows:"<<endl;
    cin>>n;

    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }

    for(int i=1;i<=n-1;i++)
    {
        for(int j=0;j<(n-1)-(i-1);j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}