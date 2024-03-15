#include <iostream>
#include <algorithm>
#include <vector>

int getNumFromUser();
long long fibonacci(int num, std::vector<long long>& vec);

int main()
{
	std::cout << "Enter the number up to which to show Fibonacci numbers: ";
	int num = getNumFromUser();

	std::vector<long long> fibonacciNumbers(num+1);

	fibonacciNumbers[0] = 0;
	fibonacciNumbers[1] = 1;

	for (int i = 2; i <= num; i++)
		fibonacciNumbers[i]=fibonacci(i, fibonacciNumbers);

	std::cout << "Fibonacci numbers up to " << num << " are:\n";

	for (int i = 0; i <= num; i++)
		std::cout << fibonacciNumbers[i] << " ";

	return 0;
}

int getNumFromUser()
{
	int num;
	std::cin >> num;

	return num;
}

long long fibonacci(int num, std::vector<long long>& vec)
{
	if (num == 0 || num == 1)
		return vec[num];
	else
		return vec[num - 1] + vec[num - 2];
}