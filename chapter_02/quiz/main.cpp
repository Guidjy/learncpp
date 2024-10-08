/*
Write a program that reads two separate integers from the user, adds them together, and then outputs the answer.
The program should use three functions :
	A function named “readNumber” should be used to get(and return) a single integer from the user.
	A function named “writeAnswer” should be used to output the answer.This function should take a single parameter and have no return value.
	A main() function should be used to glue the above functions together.
*/

#include "io.h"
#include <iostream>


int main()
{
	int n1{ read_number() };
	int n2{ read_number() };

	write_answer(n1 + n2);

	return 0;
}
