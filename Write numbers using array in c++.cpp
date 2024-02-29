#include<iostream>
using namespace std;
int main()
{
    int a[3][4]={{2,3,4,5},{6,7,8,9},{11,12,13,14}};
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<4;j++)
        {
            cout<<a[i][j]<<endl;
        }
    }
    return 0;
}
