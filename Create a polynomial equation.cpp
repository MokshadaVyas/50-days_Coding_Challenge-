#include <iostream>
using namespace std;
struct term
{
    int coeff;
    int exp;
};

struct poly
{
    int n;
    struct term *terms;
};

void create(struct poly *p)
{
    cout << "Number of terms?? ";
    cin >> p->n;

    p->terms = new term[p->n];
    cout << "Enter term: " << endl;
    for (int i = 0; i < p->n; i++)
    {
        cin >> p->terms[i].coeff >> p->terms[i].exp;
    }
}

void display(struct poly p)
{
    for (int i = 0; i < p.n; i++)
    {
        cout << p.terms[i].coeff << "x^" <<p.terms[i].exp<<" ";
        if(i<p.n-1)
        {
            cout<<" + ";
        }
    }
    cout<<endl;
}

struct poly *add(struct poly *p1,struct poly *p2)
{
    struct poly *sum;
    
}
int main()
{

    struct poly p;
    create(&p);
    display(p);
    return 0;
}
