// A virtual function is not used for performing any task. It only serves as a placeholder.
#include <iostream>
using namespace std;
// Abstract class
class Shape
{
public:
    virtual float calculateArea() = 0; // pure virtual function.
};
class Square : public Shape
{
    float a;

public:
    Square(float l)
    {
        a = l;
    }
    float calculateArea()
    {
        return a * a;
    }
};
class Circle : public Shape
{
    float r;

public:
    Circle(float x)
    {
        r = x;
    }
    float calculateArea()
    {
        return 3.14 * r * r;
    }
};
class Rectangle : public Shape
{
    float l;
    float b;

public:
    Rectangle(float x, float y)
    {
        l = x;
        b = y;
    }
    float calculateArea()
    {
        return l * b;
    }
    ~Rectangle()
    {
        
    }
};
int main()
{

    Shape *shape1 = new Square(3.4);
    Shape *shape2 = new Rectangle(5, 6);
    Shape *shape3 = new Circle(7.8);
    int a1 = shape1->calculateArea();
    int a2 = shape2->calculateArea();
    int a3 = shape3->calculateArea();
    std::cout << "Area of the square is " << a1 << std::endl;
    std::cout << "Area of the rectangle is " << a2 << std::endl;
    std::cout << "Area of the circle is " << a3 << std::endl;
    delete shape1;
    delete shape2;
    delete shape3;
    // Square s(3.4);
    // Rectangle r(5,6);
    // Circle c(7.8);
    // shape =&s;
    // int a1 =shape->calculateArea();
    // shape = &r;
    // int a2 = shape->calculateArea();
    // shape = &c;
    // int a3 = shape->calculateArea();
    // std::cout << "Area of the square is " <<a1<< std::endl;
    // std::cout << "Area of the rectangle is " <<a2<< std::endl;
    // std::cout << "Area of the circle is " <<a3<< std::endl;

    return 0;
    //g++ -fsanitize=address -g virtual_keyword.cpp
}