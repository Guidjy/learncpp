#include <iostream>


int get_value_from_user()
{
	std::cout << "Enter an integer: ";
	int input{};
	std::cin >> input;

	return input;
}


void print_double(int num)
{
	std::cout << num << " double is: " << num * 2;
}


int main()
{
	int num{};
	num = get_value_from_user();
	print_double(num);

	return 0;
}
