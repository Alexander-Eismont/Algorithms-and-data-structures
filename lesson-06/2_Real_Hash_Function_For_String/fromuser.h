#pragma once

#include <string>

class FromUser
{
public:
    int get_p();
    int get_n();
    std::string getStringFromUser();
    bool isPrime(int num);
    void clearAndIgnoreCin();
};
