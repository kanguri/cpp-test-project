#include <iostream>

float interestingFunction(int a, int b)
{
	float r;
	r=(a+b)*0.97;
	return r;
}

int main()
{
	int a;
	int b;
	std::cout << "Please enter the first integer: ";
	std::cin >> a;
	std::cout << "Please enter the second integer: ";
	std::cin >> b;
	std::cout << "Here is the result: " << interestingFunction(a, b) << "\n";
}
