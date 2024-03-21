#include <iostream>

void mergeSort(int* arr, int size);
void merge(int* arr, int* left, int leftSize, int* right, int rightSize);
void printArray(int* arr, int size);

int main()
{
	//int arr[] = { 3, 43, 38, 29, 18, 72, 57, 61, 2, 33 };
	//int arr[] = { 88, 91, 87, 59, 53, 49, 29, 16, 4, 27, 28, 89, 2, 25, 74 };
	int arr[] = { 24, 66, 20, 79, 30, 16, 19, 62, 94, 59, 0, 7, 59, 90, 84, 60, 95, 62 };

	int size = sizeof(arr) / sizeof(arr[0]);

	std::cout << "Source arr: ";
	printArray(arr, size);

	mergeSort(arr, size);

	std::cout << "\nSorted arr: ";
	printArray(arr, size);
	std::cout << "\n";

	return 0;
}

// функция сортировки слиянием
// merge sort function
void mergeSort(int* arr, int size)
{
	if (size <= 1)
		return;

	int mid = size / 2;

	// выделение памяти под левый и правый подмассивы
	// allocation of memory for left and right subarrays
	int* left = new int[mid];
	int* right = new int[size - mid];

	// копирование элементов из исходного массива в левый и правый подмассивы
	// copying elements from the original array to the left and right subarrays
	for (int i = 0; i < mid; i++)
		left[i] = arr[i];
	for (int i = mid; i < size; i++)
		right[i - mid] = arr[i];

	// рекурсивный вызов сортировки для левого и правого подмассива
	// recursive sort call for left and right subarray
	mergeSort(left, mid);
	mergeSort(right, size - mid);

	// слияние отсортированных подмассивов
	// merging sorted subarrays
	merge(arr, left, mid, right, size - mid);

	// освобождение памяти, выделенной для левого и правого подмассивов
	// freeing memory allocated for the left and right subarrays
	delete[] left;
	delete[] right;
}

// функция слияния отсортированных подмассивов
// function for merging sorted subarrays
void merge(int* arr, int* left, int leftSize, int* right, int rightSize)
{
	// индексы для левого и правого подмассивов и для слияния
	// indexes for left and right subarrays and for merging
	int iLeft = 0;
	int iRight = 0;
	int iMerge = 0;

	// пока не достигнут конец левого или правого подмассива
	// until the end of the left or right subarray is reached
	while (iLeft < leftSize && iRight < rightSize)
	{
		if (left[iLeft] <= right[iRight])
		{
			arr[iMerge] = left[iLeft];
			iLeft++;
		}
		else
		{
			arr[iMerge] = right[iRight];
			iRight++;
		}

		iMerge++;
	}

	// копирование оставшихся элементов из левого подмассива(если есть)
	// copying the remaining elements from the left subarray (if any)
	while (iLeft < leftSize)
	{
		arr[iMerge] = left[iLeft];
		iLeft++;
		iMerge++;
	}

	// копирование оставшихся элементов из правого подмассива (если есть)
	// copying the remaining elements from the right subarray (if any)
	while (iRight < rightSize)
	{
		arr[iMerge] = right[iRight];
		iRight++;
		iMerge++;
	}
}

void printArray(int* arr, int size)
{
	for (int i = 0; i < size; i++)
		std::cout << arr[i] << " ";
}
