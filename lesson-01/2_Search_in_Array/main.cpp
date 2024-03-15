#include <iostream>

int getNumFromUser();
int binarySearch(int* arr, int size, int target);

int main()
{
	int arr[] = { 14, 16, 19, 32, 32, 32, 56, 69, 72 };

	int size = sizeof(arr) / sizeof(arr[0]);

	std::cout << "Enter a start point: ";
	int startPoint = getNumFromUser();

	int index = binarySearch(arr, size, startPoint);

	//std::cout << "!!!" << size - index << "\n";

	std::cout << index << "\n";

	return 0;
}

int getNumFromUser()
{
	int num;
	std::cin >> num;

	return num;
}

int binarySearch(int* arr, int size, int target)
{
	int lowIndex = 0;
	int highIndex = size - 1;

	while (lowIndex < highIndex)
	{
		int mid = lowIndex + (highIndex - lowIndex) / 2;

		if (arr[mid] <= target)
		{
			lowIndex = mid + 1;
		}
		else
		{
			highIndex = mid;
		}
	}

	return size - lowIndex;
}