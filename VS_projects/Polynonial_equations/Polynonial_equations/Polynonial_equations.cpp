// Polynonial_equations.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cmath>

int main()
{
    /*for (double x = 0.0; x <= 5; x += 0.1)
    {
        double res = pow(x, 2) + 2 * x + 1;
        std::cout << "X equals: " << x <<" Result: " << res << std::endl;
    }
    return 0;*/
    double x = 0;
    int n = 0;
    std::cout << "Enter value for x:" << std::endl;
    std::cin >> x;
    std::cout << "Enter value for n (nominal):" << std::endl;
    std::cin >> n;
    double res = 0;
    int denominator = 1;
    if (n == 0)
    {
        std::cout << "Result:" << res << std::endl;
        return 0;
    }
    for (int i = 1; i <= n; i++)
    {
        if (i%2 == 1)
        {
            res += x / denominator;
            denominator += 2;
        }
        else
        {
            res -= x / denominator;
            denominator += 2;
        }
    }
    std::cout << "Result:" << res << std::endl;
    return 0;
}

