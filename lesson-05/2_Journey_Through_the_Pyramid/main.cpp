#include "pyramid.h"
#include <iostream>

int main()
{
    // int arr[] = {1, 3, 6, 5, 9, 8};
    // int arr[] = {94, 67, 18, 44, 55, 12, 6, 42};
    int arr[] = {1,  3, 6,  5,  9, 8,  16, 94, 67, 18, 44, 55,
                 12, 6, 42, 11, 9, 10, 5,  6,  8,  1,  2,  4};
    int size = sizeof(arr) / sizeof(arr[0]);

    Pyramid pyramid(arr, size);

    std::cout << "Original arr: ";
    for (int i = 0; i < size; i++)
        std::cout << arr[i] << " ";

    std::cout << "\n";

    std::cout << "Pyramid: \n";
    pyramid.printPyramid();

    pyramid.travelThroughPyramid();

    // system("pause");
    return 0;
}
