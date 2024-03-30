#pragma once

class Pyramid
{
public:
    Pyramid(int arr[], int size);
    ~Pyramid();

    void printPyramid() const;

    const int *getPyramid() const;
    const int getSize() const;

private:
    int *m_pyramid;
    int m_size;
};
