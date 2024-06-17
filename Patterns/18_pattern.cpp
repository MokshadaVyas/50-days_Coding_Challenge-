/*
Enter number of rows:
5
E 
D E 
C D E 
B C D E 
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
        char ch='E';
        for(char ch='E'-i+1;ch<='E';ch++)
        {
            cout<<ch<<" ";
        }
        cout<<endl;
    }
    return 0;
}