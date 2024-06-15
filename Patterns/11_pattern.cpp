/*
Enter number of rows:5
1
01
101
0101
10101
*/

#include <iostream>
using namespace std;
int main()
{
    int n;
    int start = 1;
    cout<< "Enter number of rows:";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        if (i % 2 != 0)
        {
            start = 1;
        }
        else
        {
            start = 0;
        }
        for (int j = 1; j <= i; j++)
        {
            cout << start;
            start = 1 - start;
        }
        cout << endl;
    }
    return 0;
}