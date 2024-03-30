#pragma once

#include <string>

class Pyramid
{
public:
    Pyramid(int arr[], int size);
    ~Pyramid();

    void printPyramid() const;
    void travelThroughPyramid();

private:
    int *m_pyramid;
    int m_size;

    void printCurrentPlace(int index, int level) const;
    std::string getAnswer() const;
    bool isValidIndex(int index, std::string &command) const;

    const int *getPyramid() const;
    const int getSize() const;

    const int getLeftIndex(int index) const;
    const int getRightIndex(int index) const;
    const int getParentIndex(int index) const;
};
