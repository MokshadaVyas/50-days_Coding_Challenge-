#include<iostream>
using namespace std;
int main()
{
    char a[]="Hello kem cho majama";
    int word=1;
    for(int i=0;a[i]!='\0';i++)
    {
        if(a[i]==' ' && a[i-1]!=' ')
        word++;
    }
    cout<<"Number of word is : "<<word<<endl;

    return 0;
}