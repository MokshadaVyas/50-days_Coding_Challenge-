#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 8, 9, 10, 11, 12};
    int n = 12; // Number of elements in the array
    int expectedSum = (n + 1) * (n + 2) / 2; // Sum of integers from 1 to n+1
    int sum = 0;
    cout << "Elements are: " << endl;
    for (int i = 0; i < n - 1; i++) {
        cout << arr[i] << " ";
        sum += arr[i];
    }
    cout << "\nMissing element is: " << expectedSum - sum << endl;
    return 0;
}
