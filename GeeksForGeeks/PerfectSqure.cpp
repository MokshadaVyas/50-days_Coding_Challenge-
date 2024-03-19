#include<iostream>
#include<cmath>
using namespace std;

void checkSquare(int number)
{
   
    int sum=sqrt(number);

    if(sum*sum==number)
    {
        cout<<"YES,given number is a perfect square"<<endl;
    }
    else{
        cout<<"NO,please enter a valid square"<<endl;
    }
}
int main()
{
    int number;
    cout<<"Enter a Number you wanna check:- ";
    cin>>number;

    checkSquare(number);
    return 0;
}