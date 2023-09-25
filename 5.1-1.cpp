// 5.1-1.cpp 

#include <iostream>
#include <algorithm>
#include <vector>

int main()
{
	std::vector<int> numbers = { 4, 7, 9, 14, 12 };

	auto func2 = [](const int& n) {
		std::cout << n << " ";
	};

	auto func3 = [](int& n) {
		if (n % 2 == 1) n *= 3;
	};

	auto func1 = [&numbers](auto func) {
		for_each(numbers.begin(), numbers.end(), func);
	};

	std::cout << "input data: ";

	func1(func2);

	std::cout << "\ninput data: ";

	func1(func3);
	func1(func2);
}
