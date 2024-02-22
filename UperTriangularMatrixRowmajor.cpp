#include<iostream>
using namespace std;
class upertri
{
    private:
    int *a;
    int n;
    public:
    upertri(int n)
    {
        this->n=n;
        a=new int[n*(n+1)/2];
    }
    void set(int i,int j,int x)
    {
        if(i<=j)
        {
          a[i * (i - 1) / 2 + j - 1]=x; 
        }
    }
    void display()
{
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= n; j++)
        {
            if(i <= j)
            {
                cout<<a[i * (i - 1) / 2 + j - 1]<<" ";
            }
            else
            {
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
    upertri up(d);
    int x;
    cout<<"enter elements:"<<endl;
        for(int i=1;i<=d;i++)
        {
            for(int j=1;j<=d;j++)   
            {
                cin>>x;
                up.set(i,j,x);
            } 
        }
    cout << endl;
    up.display();
    return 0;
}