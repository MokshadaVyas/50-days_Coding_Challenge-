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

// Second method-----
#include <iostream>
using namespace std;

class Shape {
public:
    virtual float area() = 0;
};

class Triangle : public Shape {
private:
    float base;
    float height;

public:
    Triangle(float b, float h) : base(b), height(h) {}

    float area() override {
        return 0.5 * base * height;
    }
};

class Rectangle : public Shape {
private:
    float length;
    float width;

public:
    Rectangle(float l, float w) : length(l), width(w) {}

    float area() override {
        return length * width;
    }
};

int main() {
    float base, height, length, width;

    cout << "Enter base and height of the triangle: ";
    cin >> base >> height;

    Triangle triangle(base, height);
    cout << "Area of triangle: " << triangle.area() << endl;

    cout << "Enter length and width of the rectangle: ";
    cin >> length >> width;

    Rectangle rectangle(length, width);
    cout << "Area of rectangle: " << rectangle.area() << endl;

    return 0;
}
#include <iostream>
using namespace std;

class Shape {
public:
    virtual float area() = 0;
};

class Triangle : public Shape {
private:
    float base;
    float height;

public:
    Triangle(float b, float h) : base(b), height(h) {}

    float area() override {
        return 0.5 * base * height;
    }
};

class Rectangle : public Shape {
private:
    float length;
    float width;

public:
    Rectangle(float l, float w) : length(l), width(w) {}

    float area() override {
        return length * width;
    }
};

int main() {
    float base, height, length, width;

    cout << "Enter base and height of the triangle: ";
    cin >> base >> height;

    Triangle triangle(base, height);
    cout << "Area of triangle: " << triangle.area() << endl;

    cout << "Enter length and width of the rectangle: ";
    cin >> length >> width;

    Rectangle rectangle(length, width);
    cout << "Area of rectangle: " << rectangle.area() << endl;

    return 0;
}
