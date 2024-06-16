/*
Enter number of rows:
5
ABCDE
ABCD
ABC
AB
A
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
        char ch='A';
        for(int j=1;j<=n-i+1;j++)
        {
            cout<<ch;
            ch=ch+1;
        }
        cout<<endl;
    }
    return 0;
}