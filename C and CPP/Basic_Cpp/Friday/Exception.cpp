#include <iostream>

int main()
{
    int a = 10, b = 0, c;
    try
    {
        if (b == 0)
            throw "Cannot devide by zero";
        c = a / b;
        std::cout << c << std::endl;
    }
    catch (const char *msg)
    {
        std::cout << msg << std::endl;
    }

    int n = 4, f = 1;
    while (n != 0)
    {
        f = f * n;
        n--;
    }
    std::cout << "Factorial : " << f << std::endl;
    return 0;
}