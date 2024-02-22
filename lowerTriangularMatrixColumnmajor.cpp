#include<iostream>
using namespace std;

class Lowertri {
    int *a;
    int n;
public:
    Lowertri() {
        n = 2;
        a = new int[2 * (2 + 1) / 2];
    }
    Lowertri(int n) {
        this->n = n;
        a = new int[n * (n + 1) / 2];
    }
    void Set(int i, int j, int x) {
        if (i >= j) {
            a[(j - 1) * n - ((j - 2) * (j - 1)) / 2 + i - j] = x;
        }
    }
    void Display() {
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (i >= j) {
                cout << a[(j - 1) * n - ((j - 2) * (j - 1)) / 2 + i - j] << " ";
            } else {
                cout << "0 ";
            }
        }
        cout << endl;
    }
}
};


int main() {
    int d;
    cout << "Enter dimension: " << endl;
    cin >> d;
    Lowertri lm(d);
    int x;
    cout << "Enter all elements: " << endl;
    for (int i = 1; i <= d; i++) {
        for (int j = 1; j <= d; j++) {
            cin >> x;
            lm.Set(i, j, x);
        }
    }
    cout << endl;
    lm.Display();
    return 0;
}
