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

// Second method
#include<iostream> 
using namespace std; 
 
bool isVowel(char ch) 
{ 
	ch = toupper(ch); 
	return (ch=='A' || ch=='E' || ch=='I' || 
					ch=='O' || ch=='U'); 
} 
 
int countVowels(string str) 
{ 
	int count = 0; 
	for (int i=0; i<str.length(); i++) 
		if (isVowel(str[i])) 
			++count; 
	return count; 
} 

int main() 
{ 
	string str = "abc de"; 
	cout << countVowels(str) << endl; 
	return 0; 
} 
