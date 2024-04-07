#include "fromuser.h"
#include <iostream>

int FromUser::get_p()
{
    int p = 0;
    FromUser from;

    while (!from.isPrime(p))
    {
        std::cout << "Enter p: ";
        std::cin >> p;

        from.clearAndIgnoreCin();

        if (!from.isPrime(p))
            std::cerr << "Error! The number 'p' must be prime.\n";
    }

    return p;
}

int FromUser::get_n()
{
    FromUser from;
    int num;

    std::cout << "Enter n: ";
    std::cin >> num;

    from.clearAndIgnoreCin();

    return num;
}

std::string FromUser::getStringFromUser()
{
    std::string str;

    std::cout << "Enter a string: ";
    std::getline(std::cin, str);

    return str;
}

bool FromUser::isPrime(int num)
{
    if (num <= 1)
        return false;

    for (int i = 2; i * i <= num; i++)
        if (num % i == 0)
            return false;

    return true;
}

void FromUser::clearAndIgnoreCin()
{
    std::cin.clear();
    std::cin.ignore();
}
