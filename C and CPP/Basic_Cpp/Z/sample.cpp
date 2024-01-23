
#include <iostream>
class Rectangle
{
    int length, width;

public:
    Rectangle(int l = 0, int w = 0)
    {
        length = l;
        width = w;
    }
    Rectangle operator+(Rectangle &r3);
    Rectangle operator-(Rectangle &r3);
    void display()
    {
        std::cout << "\n"
                  << length << " " << width;
    }
    friend Rectangle operator+(int n, Rectangle &r3);
    friend std::ostream& operator<<( std::ostream &,const Rectangle &);
};

std::ostream& operator<<( std::ostream &os,const Rectangle &r)
{
    os<<r.length;
    os<<r.width;
    return os;
}

Rectangle operator+(int n, Rectangle &r3)
{
    Rectangle sumobj;
    sumobj.length = n + r3.length;
    sumobj.width = n + r3.width;
    return sumobj;
}

Rectangle Rectangle::operator+(Rectangle &r3)
{
    Rectangle sumobj;
    sumobj.length = this->length + r3.length;
    sumobj.width = this->width + r3.width;
    return sumobj;
}

Rectangle Rectangle::operator-(Rectangle &r3)
{
    Rectangle obj;
    obj.length = this->length - r3.length;
    obj.width = this->width - r3.width;
    return obj;
}
int main()
{
    Rectangle r1(6, 10), r2(4, 7);
    // Rectangle r3= ++r1;

    Rectangle r3 = 10 + r2; // operator+(10,r2)
    //r3.display();

    std::cout<<r3<<r1;

    // r3.display();

    // r3 = r1 - r2;
    // r3.display();
}

//   ==     !=

// Rectangle r4=r1.subtract(r2);
// bool flag = r1.compare(r2);//lenth & width
// r1.calculateArea();
// r1.calculatePerimeter();
