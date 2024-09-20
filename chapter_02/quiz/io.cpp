#include "io.h"
#include <iostream>


int read_number()
{
	std::cout << "Enter an integer: ";
	int num{};
	std::cin >> num;

	return num;
}


void write_answer(int num)
{
	std::cout << "The sum is equal to " << num << "\n";
}
