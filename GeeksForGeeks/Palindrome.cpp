#include<iostream>
using namespace std;

int checkPalindrome(int a[], int size) {
    int x = 0;
    int y = size - 1;
    while (x < y) {
        if (a[x] != a[y]) {
            return false;
        }
        x++;
        y--;
    }
    return true;
}

int main() {
    int size = 20;
    int *a = new int[size];
    cout << "Enter " << size << " numbers: " << endl;
    for (int i = 0; i < size; i++) {
        cin >> a[i];
    }

    cout << "The number is " << (checkPalindrome(a, size) ? "palindrome" : "not palindrome") << endl;

    delete[] a;
    return 0;
}
