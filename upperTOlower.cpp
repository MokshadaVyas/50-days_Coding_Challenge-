// #include<iostream>
// using namespace std;
// int main()
// {
//     char name[]="mokshada";
//     for(int i=0;name[i]!='\0';i++)
//     {
//         name[i]=name[i]-32;
//     }
//         cout<<name;
// }

#include<iostream>
using namespace std;
int main()
{
    char name[]="MOKSHADA";
    for(int i=0;name[i]!='\0';i++)
    {
        name[i]=name[i]+32;
    }
        cout<<name;
}
