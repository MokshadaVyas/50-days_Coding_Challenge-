#include<iostream>
#include<cmath>
using namespace std;

class calculator
{
    private:
    double num1,num2;

    public:
    calculator(double a,double b)
    {
        num1=a;
        num2=b;
    }

    double add(){
        return num1+num2;
    }

    double sub(){
        return num1-num2;
    }

    double multi(){
        return num1*num2;
    }

    double div(){
        if(num2!=0)
        {
            return num1/num2;
        }
        else
        {
            cout<<"Error:Can't divisible by zero"<<endl;
            return 0;
        }
    }

    double squareroot(){
        return sqrt(num1);
    }
};
int main()
{
    int a,b;
    int choice;
    double result;
    cout<<"Enter two numbers: "<<endl;
    cin>>a>>b;

    calculator c1(a,b);

    cout<<"--Choose any of these operations--"<<endl;
    cout<<"1.Addition"<<endl;
    cout<<"2.Subtraction"<<endl;
    cout<<"3.Multiplication"<<endl;
    cout<<"4.Divison"<<endl;
    cout<<"5.Square Root"<<endl;

    cin>>choice;
    cout<<"You've choosed "<<choice<<" operation"<<endl;

    switch(choice)
    {
        case 1:
        result=c1.add();
        cout<<"Addition of these two number is: "<<result<<endl;
        break;

        case 2:
        result=c1.sub();
        cout<<"Subtraction of these two number is: "<<result<<endl;
        break;

        case 3:
        result=c1.multi();
        cout<<"Multiplication of these two number is: "<<result<<endl;
        break;

        case 4:
        result=c1.div();
        cout<<"Divison of these two number is: "<<result<<endl;
        break;

        case 5:
        result=c1.squareroot();
        cout<<"squareroot of the number is: "<<result<<endl;
        break;

        default:
        cout<<"Invalid choice"<<endl;
        break;

    }
    return 0;
}