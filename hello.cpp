#include <iostream>

float interestingFunction(int a, int b)
{
	float r;
	r=(a+b)*0.97;
	return r;
}

int main()
{
	std::cout << interestingFunction(5, 6) << "\n";
	std::cout << "Hello!" << "\n";
}
