#include <iostream>
#include <fstream>

int main()
{
    std::ofstream outFile("readme.txt");
    
    if (!outFile)
    {
        std::cout << "Cannot open file readme.txt\n";
        return 1;
    }
    outFile << "Hello, world!" << std::endl;
    outFile << "Second string\n" << 2+2 << "\n";
    outFile.close();

}