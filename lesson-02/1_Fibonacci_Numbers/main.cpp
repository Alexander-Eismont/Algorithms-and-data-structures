#include <iostream>
#include <ctime>

int getNumFromUser();
long long fibonacci(int num);

int main()
{
	int secToMilisec = 1000;

	std::cout << "Enter the number up to which to show Fibonacci numbers: ";
	int num = getNumFromUser();

	int startTime = clock();

	for (int i = 0; i < num; i++)
		std::cout << fibonacci(i) << " ";

	int endTime = clock();

	std::cout << "\nRuntime = " << (endTime - startTime) / secToMilisec << "\n";

	return 0;
}

int getNumFromUser()
{
	int num;
	std::cin >> num;

	return num;
}

long long fibonacci(int num)
{
	if (num <= 0)
		return 0;
	else if (num == 1)
		return 1;
	else
		return fibonacci(num - 1) + fibonacci(num - 2);
}