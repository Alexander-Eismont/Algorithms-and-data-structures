#include "rabinkarp.h"
#include <iostream>
#include <string>

std::string getStringFromUser();

int main()
{
    std::cout << "Enter the string in which to search: ";
    std::string text = getStringFromUser();

    while (true)
    {
        std::cout << "Enter the substring you want to find: ";
        std::string pattern = getStringFromUser();

        RabinKarp rabinKarp;
        int index = rabinKarp.findSubstringLightRabinKarp(text, pattern);

        if (index != -1)
            std::cout << "Substring '" << pattern << "' found by index "
                      << index << "\n";
        else
            std::cout << "Substring '" << pattern << "' not found\n";

        if (pattern == "exit")
            break;
    }

    return 0;
}

std::string getStringFromUser()
{
    std::string str;
    getline(std::cin, str);

    return str;
}
