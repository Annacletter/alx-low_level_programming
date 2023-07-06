#include "main.h"

/**
 * print_binary - This program prints the binary presentation of a number.
 * @number: To be printed in binary.
 */
void print_binary(unsigned long int number)
{
	if (number > 1)
		print_binary(number >> 1);

	_putchar((number & 1) + '0');
}
