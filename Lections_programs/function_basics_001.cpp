#include <iostream>

unsigned long long factorial(unsigned int n)
{
    return n > 1 ? n * factorial(n - 1) : 1;
}

int main()
{
    for (int i = 1; i < 20; ++i)
    {
        std::cout << i << "!= " << factorial(i) << std::endl;
    }
}