/*
Enter number of rows:
5
A 
A B 
A B C 
A B C D 
A B C D E 
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
        for(int j=1;j<=i;j++)
        {
            cout<<ch<<" ";
            ch=ch+1;
        }
        cout<<endl;
    }
    return 0;
}