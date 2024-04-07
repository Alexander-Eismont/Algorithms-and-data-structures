#include "rabinkarp.h"
#include <cmath>

RabinKarp::RabinKarp(int prime) : m_prime{prime} {}

int RabinKarp::getPrime() const { return m_prime; }

int RabinKarp::calculateHash(const std::string &s, int len)
{
    int hash = 0;

    for (int i = 0; i < len; i++)
        hash += (int)s[i] * pow(getPrime(), i);

    return hash;
}

int RabinKarp::reCalculateHash(const std::string &s, int oldHash, int oldIndex,
                               int newIndex, int len)
{
    int prime = getPrime();

    int newHash = oldHash - (int)s[oldIndex];
    newHash /= prime;
    newHash += (int)s[newIndex] * pow(prime, len - 1);

    return newHash;
}

int RabinKarp::findSubstringLightRabinKarp(const std::string &text,
                                           const std::string &pattern)
{
    int textLen = text.length();
    int patternLen = pattern.length();
    int patternHash = calculateHash(pattern, patternLen);
    int textHash = calculateHash(text, patternLen);

    for (int i = 0; i <= textLen - patternLen; i++)
    {
        if (textHash == patternHash && text.substr(i, patternLen) == pattern)
            return i;

        if (i < textLen - patternLen)
            textHash =
                reCalculateHash(text, textHash, i, i + patternLen, patternLen);
    }

    return -1;
}
