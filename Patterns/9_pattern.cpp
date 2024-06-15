/*
Enter number of rows: 5
    *
   ***
  *****
 *******
*********
*********
 *******
  *****
   ***
    *
*/

#include<iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter number of rows: ";
    cin >> n;

    // Top pyramid
    for(int i = 0; i < n; i++)
    {
        // Print leading spaces
        for(int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }
        // Print stars
        for(int j = 0; j < 2 * i + 1; j++)
        {
            cout << "*";
        }
        // Move to the next line
        cout << endl;
    }

    // Inverted pyramid
    for(int i = 0; i < n; i++)
    {
        // Print leading spaces
        for(int j = 0; j < i; j++)
        {
            cout << " ";
        }
        // Print stars
        for(int j = 0; j < 2 * (n - i) - 1; j++)
        {
            cout << "*";
        }
        // Move to the next line
        cout << endl;
    }

    return 0;
}
