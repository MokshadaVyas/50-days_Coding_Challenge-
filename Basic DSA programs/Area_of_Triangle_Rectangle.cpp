#include<iostream>
using namespace std;
class shape
{
    protected:
    int width;
    int height;

    public:
    shape()
    {

        cout<<"Enter width: "<<endl;
        cin>>width;
        cout<<"Enter height: "<<endl;
        cin>>height;
    }
};

class triangle : public shape{
    public:
    int area()
    {
        return (width*height)/2;
    }
};

class rectangle : public shape{
    public:
    int area() 
    {
        return width*height;
    }
};
int main()
{
    triangle t1;
    rectangle r1;
    cout<<"Area of triangle is: "<<t1.area()<<endl;
    cout<<"Area of rectangle is: "<<r1.area()<<endl;
    return 0;
}