#include <iostream>
using namespace std;

int main()
{
    int **a;
    int i, j, n;

    cout << "Enter dimension:" << endl;
    cin >> n;

    // Allocate memory for the 2D array
    a = new int *[n];
    for (i = 0; i < n; i++)
    {
        a[i] = new int[n];
    }

    cout << "Enter elements:" << endl;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            cin >> a[i][j];
        }
    }

    cout << "Display Matrix" << endl;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (i == j)
            {
                cout << a[i][j] << " ";
            }
            else
            {
                cout << "0 ";
            }
        }
        cout << endl;
    }

    // Free memory
    for (i = 0; i < n; i++)
    {
        delete[] a[i];
    }
    delete[] a;

    return 0;
}
