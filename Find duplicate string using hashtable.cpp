#include<iostream>
using namespace std;

int main() {
    char a[255];
    int h[26] = {0}; // Initialize hash table to store counts of characters

    cout << "Enter a string: ";
    cin.getline(a, 255);

    // To enter numbers in hashtable
    for (int i = 0; a[i] != '\0'; i++) {
        if (a[i] >= 'a' && a[i] <= 'z') {
            h[a[i] - 'a']++; // Increment count for the character
        }
    }

    // To find duplicate characters and print their counts
    for (int i = 0; i < 26; i++) {
        if (h[i] > 1) { // If count is greater than 1, it's a duplicate
            cout << "Character '" << char('a' + i) << "' occurs " << h[i] << " times." << endl;
        }
    }

    return 0;
}
