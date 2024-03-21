#include <iostream>

void printArray(int* arr, const int size);
void countSort(int* arr, const int size);

int main()
{
	//int arr[] = { 19, 14, 22, 22, 17, 22, 13, 21, 20, 24, 18, 10, 17, 16, 17, 
	//			  20, 22, 11, 20, 16, 14, 13, 10, 22, 18, 14, 16, 24, 19, 17 };
	//int arr[] = { 16, 17, 14, 20, 22, 20, 17, 22, 16, 19, 23, 24, 20, 22, 21, 
	//			  18, 14, 16, 17, 21, 10, 11, 19, 23, 11, 11, 17, 17, 11, 21, 
	//			  17, 11, 17, 16, 12, 11, 16, 22, 23, 16 };
	int arr[] = { 21, 15, 19, 18, 23, 12, 18, 18, 19, 23, 12, 20, 15, 22, 21, 
				  18, 19, 20, 12, 16, 20, 14, 17, 13, 10, 23, 19, 14, 10, 22, 
				  19, 12, 24, 23, 22, 15, 13, 22, 18, 18, 11, 23, 24, 17, 10 };

	int size = sizeof(arr) / sizeof(arr[0]);

	std::cout << "Unsorted array: ";
	printArray(arr, size);

	countSort(arr, size);

	std::cout << "\nSorted array: ";
	printArray(arr, size);
	std::cout << "\n";

	return 0;
}

void countSort(int* arr, const int size)
{
	const int maxValue = 24;

	// Создаем массив для подсчета элементов
	// We create an array for calculating the elements
	int counts[maxValue + 1] = {};

	// Подсчитываем количество вхождений каждого элемента
	// We calculate the number of entries of each element
	for (int i = 0; i < size; i++)
		counts[arr[i]]++;

	// Обновляем массив подсчета, чтобы каждый элемент указывал на его позицию в отсортированном массиве
	// We update the calculation array so that each element indicates its position in the sorted array
	for (int i = 1; i <= maxValue; i++)
		counts[i] += counts[i - 1];

	// Создаем временный массив для хранения отсортированных элементов
	// We create a temporary array for storing sorted elements
	int* sortedArr = new int[size];

	// Перемещаем элементы в отсортированный массив в соответствии с их позициями в массиве подсчета
	// We move the elements to the sorted array in accordance with their positions in the calculation array
	for (int i = size - 1; i >= 0; i--)
	{
		sortedArr[counts[arr[i]] - 1] = arr[i];
		counts[arr[i]]--;
	}

	// Копируем отсортированный массив обратно в исходный массив
	// Copy the sorted array back to the original array
	for (int i = 0; i < size; i++)
		arr[i] = sortedArr[i];

	delete[] sortedArr;
}

void printArray(int* arr, const int size)
{
	for (int i = 0; i < size; i++)
		std::cout << arr[i] << " ";
}