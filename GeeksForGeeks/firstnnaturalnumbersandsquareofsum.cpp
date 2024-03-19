#include<iostream>
#include<cmath>
using namespace std;
int main()
{
   int n,sum=0;
   float sq;

   cout<<"Enter n(Natural) numbers:- ";
   cin>>n;

   for(int i=1;i<=n;i++)
   {
        sum=sum+(i*i);
   }

     cout << "Sum of squares of the first " << n << " numbers is: " << sum << endl;
    
     sq=sqrt(sum);
     cout<<"square-root of the sum is : "<<sq<<endl;
     return 0;

}