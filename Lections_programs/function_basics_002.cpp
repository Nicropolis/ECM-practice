#include <iostream>

int main(int argc, char* argv[], char* env[])
{
    std::cout << "argc = " << argc << std::endl;

    for (int i = 0; i < argc; i++)
    {
        std::cout << i << argv[i] << std::endl;
    }

    int index = 0;
    while(env[index] != nullptr)
    {
        std::cout << index <<": " << env[index] << std::endl;
        ++index;
    }
    
    return 0;
}