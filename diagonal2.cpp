#include <iostream>
using namespace std;
class Diagonal
{
private:
    int *a;
    int n;

public:
    Diagonal(int n)
    {
        this->n = n;
        a = new int[n];
    }
    void Set(int i, int j, int x)
    {
        if (i == j)
            a[i - 1] = x;
    }
    int Get(int i, int j)
    {
        if (i == j)
            return a[i - 1];
        else
            return 0;
    }
    void Display()
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
                if (i == j)
                {
                    cout << a[i];
                }
                else
                {
                    cout << "0";
                }
            cout << endl;
        }
    }
    ~Diagonal()
    {
        delete[] a;
    }
};

int main()
{
    Diagonal d(5);
    d.Set(1, 1, 10);
    d.Set(2, 2, 20);
    d.Set(3, 3, 30);
    d.Set(4, 4, 40);
    d.Set(5, 5, 50);
    d.Display();

    return 0;
}