#include <iostream>

int simpleStringHash(const std::string &str);
std::string getString();

int main()
{
    do
    {
        std::string inputStr = getString();

        int hash = simpleStringHash(inputStr);
        std::cout << "Naive string hash '" << inputStr << "': " << hash << "\n";

        if (inputStr == "exit")
            break;
    }
    while (true);

    system("pause");

    return 0;
}

int simpleStringHash(const std::string &str)
{
    int hash = 0;

    for (char letter : str)
        hash += static_cast<int>(letter);

    return hash;
}

std::string getString()
{
    std::string str;

    std::cout << "Enter the string: ";
    std::getline(std::cin, str);

    return str;
}
