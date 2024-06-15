/*
Enter number of rows:-
5
* * * * * 
* * * * * 
* * * * * 
* * * * * 
* * * * * 
*/
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter number of rows:-"<<endl;
    cin>>n;

    for(int i=0;i<n;i++)
    {
        for (int j=0;j<n;j++)
        {
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
    return 0;
}