#include<iostream>
using namespace std;
int main()
{
    char a[255];
    cout<<"Enter a string: "<<endl;
    cin.getline(a,255);

    // To find duplicate
    int i,j;
    for(int i=0;a[i]!='\0';i++)
    {
        for(int j=i+1;a[j]!='\0';j++)
        {
            if(a[i]==a[j])
            {
                cout<<"Duplicate number is:- "<<a[i];
            }
        }
    }
    return 0;
}
