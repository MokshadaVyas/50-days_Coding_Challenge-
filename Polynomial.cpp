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
        cout << p.terms[i].coeff << "x^" << p.terms[i].exp << " ";
        if (i < p.n - 1)
        {
            cout << " + ";
        }
    }
    cout << endl;
}

poly add(poly p1, poly p2)
{
    poly sum;
    sum.n = p1.n + p2.n;
    sum.terms = new term[sum.n];

    int i = 0, j = 0, k = 0;
    while (i < p1.n && j < p2.n)
    {
        if (p1.terms[i].exp > p2.terms[j].exp)
        {
            sum.terms[k++] = p1.terms[i++];
        }
        else if (p1.terms[i].exp < p2.terms[j].exp)
        {
            sum.terms[k++] = p2.terms[j++];
        }
        else
        {
            sum.terms[k].exp = p1.terms[i].exp;
            sum.terms[k++].coeff = p1.terms[i++].coeff + p2.terms[j++].coeff;
        }
    }

    while (i < p1.n)
    
        sum.terms[k++] = p1.terms[i++];
    while (j < p2.n)
        sum.terms[k++] = p2.terms[j++];

    sum.n = k;
    return sum;
}

int main()
{

    struct poly p1, p2, sum;
    cout <<"\nEnter first polynomial:- " << endl;
    create(&p1);
    cout <<"Enter second polynomial:- " << endl;
    create(&p2);



    cout<<"polynomial 1: ";
    display(p1);
    cout<<"\npolynomial 2: ";
    display(p2);

    sum=add(p1,p2);
    cout <<"\nSum of the polynomials: ";
    display(sum);

    delete[] p1.terms;
    delete[] p2.terms;
    delete[] sum.terms;

    return 0;
}