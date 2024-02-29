#include<iostream>
using namespace std;
int fact(int x)
{
    if(x==0)
    {
        return 1;
    }
    else{
        return fact(x-1)*x;
    }
}
// using iteration
int Ifact(int x)
{
    int n;
    int f=1;
    for(int i=1;i<=n;i++)
    {
        f=f*i;
        return f;
    }
}

int main()
{
    int r;
    r=fact(5);
    printf("%d",r);
    return 0;
}
