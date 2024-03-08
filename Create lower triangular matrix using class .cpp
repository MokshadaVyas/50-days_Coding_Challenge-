#include<iostream>
using namespace std;
class Lowertri
{
    int *a;
    int n;
    public:
    Lowertri()
    {
        n=2;
        a=new int[2*(2+1)/2];
    }
    Lowertri(int n)
    {
        this->n=n;
        a=new int[n*(n+1)/2];
    }
    void Set(int i,int j,int x)
    {
        if(i>=j)
        {
            a[i*(i-1)/2+j-1]=x;
        }
    }
    void Display() {
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (i >= j) {
                cout << a[i*(i-1)/2+j-1] << " ";
            } else {
                cout << "0 ";
            }
        }
        cout << endl;
    }
}

    int getDimension()
    {
        return n;
    }
};
int main()
{
    int d;
    cout<<"enter dimension:"<<endl;
    cin>>d;
    Lowertri lm(d);
    int x;
    cout<<"enter all elements: "<<endl;
     for(int i=1;i<=d;i++)
     {
       for(int j=1;j<=d;j++) 
       {
       cin>>x;
       lm.Set(i,j,x);
       }
     }
     cout<<endl;
    lm.Display();
    return 0;
}
