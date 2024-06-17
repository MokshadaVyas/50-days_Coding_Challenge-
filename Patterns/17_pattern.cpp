/*
Enter number of rows:5
    A
   ABA
  ABCBA
 ABCDCBA
ABCDEDCBA
*/


#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter number of rows:";
    cin>>n;
    int num=1;
    for(int i=1;i<=n;i++)
    {
        char ch='A';
        for(int j=1;j<=n-i;j++)
        {
            cout<<" ";
        }
        for(int j=1;j<=i;j++)
        {
            cout<<ch;
            ch++;
        }
        ch--;

        for(int j=1;j<i;j++)
        {
            ch--;
            cout<<ch;
        }
        cout<<endl;
    }
    return 0;    
}