#include<iostream>
using namespace std;

class solution
{
public:
    int valid(char ch)
    {
        if((ch>='a' && ch<='z')||(ch>='A' && ch<='Z')||(ch>='0' && ch<='9'))
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }

    char toLowercase(char ch)
    {
        if(ch>='A' && ch<='Z') // Convert uppercase to lowercase
        {
            return ch + 32;
        }
        else
        {
            return ch; // Keep digits and lowercase unchanged
        }
    }

    int checkPalindrome(string s)
    {
        int x=0;
        int y=s.length()-1;
        while(x<y)
        {
            if(s[x]!=s[y])
            {
                return 0;
            }
            else
            {
                x++;
                y--;
            }
        }
        return 1;
    }
};


int main()
{
    solution a;
    char character;
    string s;
    cout<<"Enter any character value: "<<endl;
    cin>>character;

    cout<<"Is this Character valid? "<<a.valid(character)<<endl;
    cout<<"Lowercase character is  "<<a.toLowercase(character)<<endl;

    //To store user input s
    cout<<"Enter a string: "<<endl;
    cin>>s;

    cout<<"Palindrome or not: "<<a.checkPalindrome(s)<<endl;
    return 0;
}
