#include "pyramid.h"
#include <iostream>

Pyramid::Pyramid(int arr[], int size)
    : m_size{size}
{
    m_pyramid = new int[m_size];

    for (int i = 0; i < m_size; i++)
        m_pyramid[i] = arr[i];
}

Pyramid::~Pyramid() { delete[] m_pyramid; }

void Pyramid::printPyramid() const
{
    for (int i = 0; i < m_size; ++i)
    {
        int level = 0;
        int index = i;

        if (index == 0)
            std::cout << "Level: " << level << " root ";
        else
        {
            while (index > 0)
            {
                index = (index - 1) / 2;
                level++;
            }
            std::cout << "Level: " << level << " " << (i % 2 == 0 ? "right(" : "left(")
                      << m_pyramid[(i - 1) / 2] << ") ";
        }
        std::cout << m_pyramid[i] << std::endl;
    }
}

const int *Pyramid::getPyramid() const { return m_pyramid; }

const int Pyramid::getSize() const { return m_size; }
