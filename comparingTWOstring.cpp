#include<iostream>
using namespace std;

int main()
{
    char a[] = "Mokshadavyas";
    char b[] = "Mokshada";
    int i, j;

    for (i = 0, j = 0; a[i] != '\0' && b[j] != '\0'; i++, j++)
    {
        if (a[i] != b[j])
         break;
    }

    if (a[i] == b[j])
    {
        cout << "They both are equal" << endl;
    }
    else if (a[i] < b[j])
    {
        cout << "First string is smaller" << endl;
    }
    else
    {
        cout << "First string is greater" << endl;
    }

    return 0;
}
