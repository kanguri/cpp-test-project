#include <iostream>
#include <sstream>

float interestingFunction(int a, int b)
{
	float r;
	r=(a+b)*0.97;
	return r;
}

int main(int argc, char* argv[])
{
	if (argc < 3)
	{
		std::cout << "Usage: " << argv[0] << " a b\n";
		return 0;
	}
	std::istringstream ss(argv[1]);
	std::istringstream ss2(argv[2]);
	int a;
	int b;
	if (!(ss >> a))
	{
		std::cerr << "Invalid number " << argv[1] << "\n";
		return 1;
	}
	if (!(ss2 >> b))
	{
		std::cerr << "Invalid number " << argv[2] << "\n";
		return 1;
	}
	
	std::cout << interestingFunction(a, b) << "\n";
}
