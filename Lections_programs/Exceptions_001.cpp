#include <iostream>

int GCD(int x, int y)
{
    if (x==0 || y==0)
    {
        throw 0;
    }
    if (x < 0)
    {
        throw "First argument is negative";
    }
    if (y < 0)
    {
        throw "Second argument is negative";
    }
    while (x!=y)
    {
        if (x>y)
            x -= y;
        else
            y -= x;
    };
    return x;
}

void tester()
{
    std::cout << "step 1\n";
    try
    {
        int res = GCD(10, 20);
    }
    catch (const char* error)
    {
        std::cout << "Tester, step 1: " << error << std::endl;
    }

    std::cout << "step 2\n";
    try
    {
        int res = GCD(10, -20);
    }
    catch (const char* error)
    {
        std::cout << "Tester, step 2: " << error << std::endl;
    }

    std::cout << "step 3\n";
    try
    {
        int res = GCD(10, 0);
    }
    catch (const char* error)
    {
        std::cout << "Tester, step 3: " << error << std::endl;
    }

    std::cout << "step 4\n";
    try
    {
        int res = GCD(0, 0);
    }
    catch (int error)
    {
        std::cout << "Tester, step 4: " << error << std::endl;
    }
}

int main()
{
    try
    {
        tester();
    }
    catch(...)
    {
        std::cout << "Something happend." << std::endl;
    }
    int x, y;
    while(true)
    {
        std::cout <<"x = ";
        std::cin >> x;
        std::cout <<"y = ";
        std::cin >> y;
        try
        {
            int res = GCD(x, y);
            std::cout << "gcd(x,y) = " << res << std::endl;
        }
        catch(int error)
        {
            std::cout << "Error: " << error << std::endl;
        }
        catch(const char* error)
        {
            std::cout << "Error: " << error << std::endl;
        }catch(...)
        {
            std::cout << "Unknown error. " << std::endl;
        }
    }
    return 0;
}