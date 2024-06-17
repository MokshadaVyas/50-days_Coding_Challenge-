/*
Enter number of rows:5
A
BB
CCC
DDDD
EEEEE
FFFFFF
*/

#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter number of rows:";
    cin>>n;

    for(int i=0;i<=n;i++)
    {
        char ch='A'+i;
        for(int j=0;j<=i;j++)
        {
            cout<<ch;
        }
        cout<<endl;
    }
    return 0;
}