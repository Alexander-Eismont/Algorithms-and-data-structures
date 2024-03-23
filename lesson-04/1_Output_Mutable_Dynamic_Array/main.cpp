#include <iostream>
#include <format>

int getNumFromUser();
void printDynamicArray(int* arr, int logicalSize, int actualSize);
bool checkSizes(int logicalSize, int actualSize);
void fillArr(int* arr, int logicalSize);

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

		printDynamicArray(arr, logicalSize, actualSize);

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
