#include <iostream>
// #include<stdio.h>
using namespace std;
void fun(int x)
{
    if (x > 5)
    {
        printf("%d", x);
        fun(x-1);
    }
}

int main()
{
    int n = 10;
    fun(n);
    return 0;
}
