#include<iostream>
using namespace std;

int isPrime(int n)
{
    if(n==0 && n==1)
    {
        return false;
    }

    for(int i=2;i<n;i++)
    {
        if(n%2==0)
        {
            return false;
        }else
        {
            return true;
        }
    }
}

int main()
{
    int i;
    cout<<"1 to 100 Prime numbers"<<endl;
    for(int i=2;i<=100;i++)
    {
        if(isPrime(i))
        {
        cout<<i<<" ";
        }
    }

    return 0;
}