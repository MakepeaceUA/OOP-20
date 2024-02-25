#include <iostream>
#include <string>
#include <cmath>
using namespace std;

class Figure 
{
protected:
    int side;
public:
    Figure() 
    {
        side = 2;
    }
    Figure(int val) 
    {
        side = val;
    }
    void Square() 
    {
        cout << side << "\n";
    }
    void Perimeter() 
    {
        cout << side << "\n";
    }
};

class Triangle : public Figure 
{
    int side1, side2;
public:
    Triangle() : Figure() 
    {
        side1 = 2;
        side2 = 2;
    }
    Triangle(int val1, int val2) : Figure(val1) 
    {
        side1 = val1;
        side2 = val2;
    }
    void Square();
    void Perimeter();
};
void Triangle::Square()
{
    int height = side * sqrt(3) / 2;
    cout << 0.5 * side * height << "\n";
}
void Triangle::Perimeter()
{
    cout << side + side1 + side2 << "\n";
}
class Squar : public Figure 
{
public:
    Squar() : Figure() {}
    Squar(int val) : Figure(val) {}
    void Square();
    void Perimeter();
};
void Squar::Square()
{
    cout << side * side << "\n";
}
void Squar::Perimeter()
{
    cout << 4 * side << "\n";
}

class Rectangle : public Figure 
{
    int side1;
public:
    Rectangle() : Figure() 
    {
        side1 = 2;
    }
    Rectangle(int val, int val1) : Figure(val) 
    {
        side1 = val1;
    }
    void Square();
    void Perimeter();
};
void Rectangle::Square() 
{
    cout << side * side1 << "\n";
}
void Rectangle::Perimeter() 
{
    cout << 2 * (side + side1) << "\n";
}

class Circle : public Figure 
{
public:
    Circle() : Figure() {}
    Circle(int val) : Figure(val) {}
    void Square();
    void Perimeter();
};
void Circle::Square()
{
    cout << 3.14 * side * side << "\n";
}
void Circle::Perimeter()
{
    cout << 2 * 3.14 * side << "\n";
}

int main() {
    Rectangle obj(5,5);
    obj.Square();
    obj.Perimeter();

    obj.Figure::Square();
    obj.Figure::Perimeter();
}