#include<iostream>
using namespace std;

struct matrix
{
    int *a;
    int n;
};

void set(struct matrix *m, int i, int j, int x)
{
    if (i >= j)
    {
        m->a[i * (i - 1) / 2 + j - 1] = x;
    }
}

void Display(struct matrix m)
{
    for (int i = 1; i <= m.n; i++)
    {
        for (int j = 1; j <= m.n; j++)
        {
            if (i >= j)
            {
                cout << m.a[i * (i - 1) / 2 + j - 1] << " ";
            }
            else
            {
                cout << "0 ";
            }
        }
        cout << endl;
    }
}

int main()
{
    struct matrix m;
    cout << "Enter Dimension: ";
    cin >> m.n;

    int num_elements = (m.n * (m.n + 1)) / 2;
    m.a = new int[num_elements];

    cout << "Enter all elements:" << endl;
    for (int i = 1; i <= m.n; i++)
    {
        for (int j = 1; j <= m.n; j++)
        {
            int x;
            cin >> x;
            set(&m, i, j, x);
        }
    }
    Display(m);

    delete[] m.a; 
    return 0;
}
