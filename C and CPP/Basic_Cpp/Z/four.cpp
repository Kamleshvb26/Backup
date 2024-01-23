#include <iostream>
#include <cstring>
using namespace std;

// Polymorphism - functions with same name
// poly - many , morph-forms- many forms of same message
class Math
{
    //
    public:
    static void add(int a, int b)
    {
        std::cout << " int+int sum = " << a + b;
    }
    static void add(int a, int b, int c)
    {
    }
    static void add(double d1, double d2)
    {
        std::cout << " double+double sum = " << d1 + d2;
    }
    static void add(float d1, float d2)
    {
        std::cout << " float+float sum = " << d1 + d2;
    }
};
int main()
{
    Math::add(10.7, 20.5);
    Math::add(10.5f, 3.6f);
    Math::add(10, 29);
}