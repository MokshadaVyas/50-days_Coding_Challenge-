#include<iostream>
using namespace std;
struct matrix
{
    int a[10];
    int n;
};
void set(struct matrix *m,int i,int j,int x)
{
    if(i==j)
    m->a[i-1]=x;
}
int get(struct matrix m,int i,int j)
{
    if(i==j)
        return m.a[i-1];
        else
        return 0;
}
void display(struct matrix m)
{
    for(int i=0;i<m.n;i++)
    {
        for(int j=0;j<m.n;j++)
        if(i==j)
        {
        cout<<m.a[i];
        }
        else{
            cout<<"0";
        }
        cout<<endl;
    }
}
int main()
{
    struct matrix m;
    m.n=4;
    set(&m,1,1,1),set(&m,2,2,2),set(&m,3,3,3),set(&m,4,4,4);
    display(m);
    
}
