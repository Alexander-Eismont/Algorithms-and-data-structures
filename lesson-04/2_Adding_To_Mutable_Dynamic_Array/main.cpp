#include <iostream>
#include <format>

int getNumFromUser();
void printDynamicArray(int* arr, int logicalSize, int actualSize);
bool checkSizes(int logicalSize, int actualSize);
void fillArr(int* arr, int logicalSize);
void appendToDynamicArray(int*& arr, int& logicalSize, int& actualSize);

int main()
{
	std::cout << "Enter actual array size: ";
	int actualSize = getNumFromUser();

	std::cout << "Enter logical array size: ";
	int logicalSize = getNumFromUser();

	int* arr = new int[actualSize];

	bool check = checkSizes(logicalSize, actualSize);

	if (!check)
	{
		std::cerr << "Error! The logical size of the array cannot exceed the actual size!\n";
	}
	else
	{
		fillArr(arr, logicalSize);

		appendToDynamicArray(arr, logicalSize, actualSize);

		std::cout << "\n";
	}

	delete[] arr;

	return 0;
}

int getNumFromUser()
{
	try
	{
		int num;
		std::cin >> num;

		if (std::cin.fail() || std::cin.peek() != '\n')
		{
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			throw "Invalid input. Please enter a number!";
		}

		return num;
	}
	catch (const char* err)
	{
		std::cerr << err << "\n";

		return getNumFromUser();
	}
}

void printDynamicArray(int* arr, int logicalSize, int actualSize)
{
	for (int i = 0; i < actualSize; i++)
		(i < logicalSize) ? std::cout << arr[i] << " " : std::cout << "_ ";

	std::cout << "\n";
}

bool checkSizes(int logicalSize, int actualSize)
{
	return (logicalSize > actualSize) ? false : true;
}

void fillArr(int* arr, int logicalSize)
{
	for (int i = 0; i < logicalSize; i++)
	{
		std::cout << std::format("Enter arr[{}]: ", i);
		arr[i] = getNumFromUser();
	}
}

void appendToDynamicArray(int*& arr, int& logicalSize, int& actualSize)
{
	int newEl;

	do
	{
		std::cout << "Dynamic array: ";
		printDynamicArray(arr, logicalSize, actualSize);

		std::cout << "Enter item to add or 0 to exit: ";
		newEl = getNumFromUser();

		if(newEl!=0)
		{
			if (logicalSize < actualSize)
			{
				arr[logicalSize] = newEl;
				logicalSize++;
			}
			else
			{
				int newActualSize = actualSize * 2;
				int* newArr = new int[newActualSize];

				for (int i = 0; i < logicalSize; i++)
					newArr[i] = arr[i];

				delete[] arr;

				arr = newArr;

				arr[logicalSize] = newEl;
				logicalSize++;

				actualSize = newActualSize;
			}
		}
	}
	while (newEl != 0);
}