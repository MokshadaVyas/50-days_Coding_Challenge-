#include<iostream>
using namespace std;

int main() {
    int *a, length;
    
    cout << "Enter length of an array: ";
    cin >> length;

    a = new int[length];

    cout << "Enter " << length << " numbers: " << endl;
    for (int i = 0; i < length; i++) {
        cin >> a[i];
    }

    int i = 0;
    int j = length - 1;
    while (i < j) {
        int temp = a[i];
        a[i] = a[j];
        a[j] = temp;
        i++;
        j--;
    }

    cout << "Reversed array: ";
    for (int i = 0; i < length; i++) {
        cout << a[i] << " ";
    }

    delete[] a;

    return 0;
}
