#include<iostream>
using namespace std;

int sum(int n)
{
    int sum=0;
    while(n!=0)
    {
        sum = sum + n % 10;
        n = n / 10;
    }
        return sum;
    
}
int main()
{
    int n;
    cout<<"Enter a number you wanna perform:- ";
    cin>>n;

    cout<<"Sum of the given number is: "<<sum(n);
    return 0;
}

// Second method ---when number is given
#include <bits/stdc++.h>
using namespace std;
class gfg {
public:
	int getSum(int n)
	{
		int sum = 0;
		while (n != 0) {
			sum = sum + n % 10;
			n = n / 10;
		}
		return sum;
	}
};

int main()
{
	gfg g;
	int n = 687;

	// Function call
	cout << g.getSum(n);
	return 0;
}
