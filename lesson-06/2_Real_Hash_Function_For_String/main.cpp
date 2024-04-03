#include "fromuser.h"
#include <cmath>
#include <iostream>

uint64_t realStringHash(const std::string &str, int p, int n);
void output(FromUser &from, int p, int n);

int main()
{
    FromUser fromUser;

    int p = fromUser.get_p();
    int n = fromUser.get_n();

    output(fromUser, p, n);

    system("pause");
    return 0;
}

uint64_t realStringHash(const std::string &str, int p, int n)
{
    uint64_t hash = 0;

    for (size_t i = 0; i < str.length(); i++)
        hash +=
            static_cast<uint64_t>(str[i]) * static_cast<uint64_t>(pow(p, i));

    return hash % n;
}

void output(FromUser &from, int p, int n)
{
    while (true)
    {
        std::string input = from.getStringFromUser();

        uint64_t hash = realStringHash(input, p, n);
        std::cout << "String hash '" << input << "' = " << hash << "\n";

        if (input == "exit")
            break;
    }
}
