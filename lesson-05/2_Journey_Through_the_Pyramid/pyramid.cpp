#include "pyramid.h"
#include <iostream>

Pyramid::Pyramid(int arr[], int size) : m_size{size}
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
            std::cout << level << " root ";
        else
        {
            while (index > 0)
            {
                index = (index - 1) / 2;
                level++;
            }
            std::cout << level << " " << (i % 2 == 0 ? "right(" : "left(")
                      << m_pyramid[(i - 1) / 2] << ") ";
        }
        std::cout << m_pyramid[i] << std::endl;
    }
}

void Pyramid::travelThroughPyramid()
{
    int currentIndex = 0;
    std::string command;
    int level = 0;

    do
    {
        printCurrentPlace(currentIndex, level);
        command = getAnswer();

        if (command == "exit")
        {
            std::cout << "Good bye!\n";
            break;
        }
        else if (command == "up")
        {
            if (isValidIndex(currentIndex, command))
            {
                int upIndex = getParentIndex(currentIndex);
                currentIndex = upIndex;
                level--;
            }
        }
        else if (command == "left")
        {
            int leftIndex = getLeftIndex(currentIndex);

            if (isValidIndex(leftIndex, command))
            {
                currentIndex = leftIndex;
                level++;
            }
        }
        else if (command == "right")
        {
            int rightIndex = getRightIndex(currentIndex);

            if (isValidIndex(rightIndex, command))
            {
                currentIndex = rightIndex;
                level++;
            }
        }
    }
    while (command != "exit");
}

void Pyramid::printCurrentPlace(int index, int level) const
{
    std::string branch;
    std::string outputLevel = "You are here: " + std::to_string(level);

    if (index == 0)
    {
        branch = "root";
        std::cout << outputLevel << " root ";
    }
    else
    {
        if (index % 2 == 0)
            branch = "right";
        else
            branch = "left";

        std::cout << outputLevel << " " << branch << " ("
                  << m_pyramid[(index - 1) / 2] << ") ";
    }

    std::cout << m_pyramid[index] << std::endl;
}

std::string Pyramid::getAnswer() const
{
    std::string command;

    std::cout << "Input the command (up/left/right/exit): ";
    std::cin >> command;

    return command;
}

bool Pyramid::isValidIndex(int index, std::string &command) const
{
    if (index == 0 && command == "up")
    {
        std::cout << "ERROR! Parents is missing!\n";
        return false;
    }
    else if (index >= 0 && index < getSize())
    {
        std::cout << "Ok!\n";
        return true;
    }
    else
    {
        if (command == "left")
            std::cout << "ERROR! The left child is missing!\n";
        else if (command == "right")
            std::cout << "ERROR! The right child is missing!\n";

        return false;
    }
}

const int *Pyramid::getPyramid() const { return m_pyramid; }

const int Pyramid::getSize() const { return m_size; }

const int Pyramid::getLeftIndex(int index) const { return index * 2 + 1; }

const int Pyramid::getRightIndex(int index) const { return index * 2 + 2; }

const int Pyramid::getParentIndex(int index) const { return (index - 1) / 2; }
