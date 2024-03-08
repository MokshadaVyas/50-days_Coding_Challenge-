#include<iostream>
using namespace std;

int max(int a[],int size)
{
    int max=a[0];
    for(int i=1;i<size;i++)
    {
        if(max<a[i])
            {
                max=a[i];
            }
    }
        return max;
}
int main()
{
    int a[4][4]={{11,23,38,45},{25,85,74,63},{48,12,86,10},{56,17,33,96}};
    cout<<"All the elements i've entered are "<<endl;
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<4;j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    
    cout<<"Maximum Number is "<<max(*a,16)<<endl;

    return 0;
}