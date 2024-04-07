#pragma once

#include <string>

class RabinKarp
{
public:
    RabinKarp(int prime = 101);

    int findSubstringLightRabinKarp(const std::string &text,
                                    const std::string &pattern);

private:
    int m_prime;

    int getPrime() const;
    int calculateHash(const std::string &s, int len);
    int reCalculateHash(const std::string &s, int oldHash, int oldIndex,
                        int newIndex, int len);
};
