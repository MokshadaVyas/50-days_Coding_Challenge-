#include<iostream>
using namespace std;
int main()
{
    char ch[20];
    int Countvowel=0;
    cout<<"Enter Characters: "<<endl;
    cin>>ch;

    for(int i=0;ch[i]!='\0';i++)
    {
        if(ch[i]=='a' || ch[i]=='e' || ch[i]=='i' || ch[i]=='o' || ch[i]=='u')
            Countvowel++;   
    }

    cout<<"Number of vowels are: "<<Countvowel<<endl;

    return 0;
}