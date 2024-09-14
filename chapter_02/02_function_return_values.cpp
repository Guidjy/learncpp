#include <iostream>


int get_value_from_user()
{
	std::cout << "Enter an integer: ";
	int input{};
	std::cin >> input;

	return input;
}


int main()
{
	int num = get_value_from_user();
	std::cout << num << " double is: " << num * 2;


	return 0;
}
