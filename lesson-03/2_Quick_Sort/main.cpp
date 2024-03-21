#include <iostream>

void printArray(int* arr, int size);
void quickSort(int* arr, int size);
int partition(int* arr, int low, int high);
void swap(int* a, int* b);

int main()
{
	//int arr[] = { 3, 43, 38, 29, 18, 72, 57, 61, 2, 33 };
	//int arr[] = { 88, 91, 87, 59, 53, 49, 29, 16, 4, 27, 28, 89, 2, 25, 74 };
	int arr[] = { 24, 66, 20, 79, 30, 16, 19, 62, 94, 59, 0, 7, 59, 90, 84, 60, 95, 62 };

	int size = sizeof(arr) / sizeof(arr[0]);

	std::cout << "Unsorted array: ";
	printArray(arr, size);

	quickSort(arr, size);

	std::cout << "\nSorted array: ";
	printArray(arr, size);
	std::cout << "\n";

	return 0;
}

// Функция для вывода массива на экран
// Function for the output of array to the screen
void printArray(int* arr, int size)
{
	for (int i = 0; i < size; i++)
		std::cout << arr[i] << " ";
}

// Основная функция быстрой сортировки
// The main function of quick sorting
void quickSort(int* arr, int size)
{
	if (size <= 1)
		return;

	int low = 0;
	int high = size - 1;

	// Получаем индекс опорного элемента
	// Getting the index of the support element
	int pi = partition(arr, low, high);

	// Рекурсивный вызов для подмассива слева от опорного элемента
	// Recursive challenge for the submissive to the left of the supporting element
	quickSort(arr, pi);

	// Рекурсивный вызов для подмассива справа от опорного элемента
	// Recursive call for the submissive to the right of the supporting element
	quickSort(arr + pi + 1, size - pi - 1);
}

// Функция для разделения массива и возврата индекса опорного элемента
// The function for separating the array and return the index of the support element
int partition(int* arr, int low, int high)
{
	// Опорный элемент
	// Supporting element
	int pivot = arr[high];
	
	// Индекс меньшего элемента
	// The index of the smaller element
	int iLow = low;

	for (int i = low; i < high; i++)
	{
		// Если текущий элемент меньше или равен опорному
		// If the current element is less or equal to the support
		if (arr[i] <= pivot)
		{
			swap(&arr[iLow], &arr[i]);

			// Увеличиваем индекс меньшего элемента
			// Increase the index of the smaller element
			iLow++;
		}
	}

	swap(&arr[iLow], &arr[high]);

	return (iLow);
}

// Функция для обмена значениями
// Function for exchange values
void swap(int* a, int* b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}
