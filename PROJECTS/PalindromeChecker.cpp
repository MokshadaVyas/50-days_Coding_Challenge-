#include<iostream>
#include<cstring>
using namespace std;
int main()
{

    char name[255];
    int x,y,i,length;

    cout<<"Enter Name:- ";
    cin>>name;

    length=strlen(name);
    x=0;
    y=length-1;

    cout<<"--To check palindrome--"<<endl;

   bool checkPalindrome=true;
   for(int i=0;i<255;i++)
   {
        while(x<y)
        {
            if(name[x]!=name[y])
            checkPalindrome=false;
            break;
        }
            x++;
            y--;
    }


    if(checkPalindrome)
    {
        cout<<"The name you've entered is palindrome "<<endl;
    }
    else
    {
        cout<<"Please enter valid palindrome name"<<endl;
    }
    
        
    




    return 0;
}