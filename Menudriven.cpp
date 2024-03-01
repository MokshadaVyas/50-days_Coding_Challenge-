#include<iostream>
using namespace std;

int main() {
    int *a, n, ch, i, j, x;
    cout << "Enter Dimension of an array:" << endl;
    cin >> n;
    a = new int[n];

    do {
        cout << "1. Create a matrix array" << endl;
        cout << "2. Retrieve matrix element" << endl;
        cout << "3. Set value in matrix" << endl;
        cout << "4. Display matrix" << endl;
        cout << "5. Exit" << endl;
        cout << "Enter your choice:" << endl;
        cin >> ch;

        switch (ch) {
            case 1:
                cout << "Enter elements of the array:" << endl;
                for (int i = 0; i < n; i++) 
                    cin >> a[i];
                break;
            case 2:
                cout << "Enter Indices:" << endl;
                cin >> i >> j;
                if (i >= 1 && i <= n && j >= 1 && j <= n) {
                    if (i == j)
                        cout << a[i - 1] << endl;
                    else
                        cout << "0" << endl;
                } else {
                    cout << "Invalid indices!" << endl;
                }
                break;
            case 3:
                cout << "Enter value of row, column, and element:" << endl;
                cin >> i >> j >> x;
                if (i >= 1 && i <= n && j >= 1 && j <= n) {
                    if (i == j)
                        a[i - 1] = x;
                } else {
                    cout << "Invalid indices!" << endl;
                }
                break;
            case 4:
                cout << "Matrix:" << endl;
                for (int i = 1; i <= n; i++) {
                    for (int j = 1; j <= n; j++) {
                        if (i == j)
                            cout << a[i - 1] << " ";
                        else
                            cout << "0";
                    }
                }
                    cout << endl;
                break;
        }
    } while (ch != 5);

    delete[] a;
    return 0;
}
