#include "main.h"

/**
 * get_bit -This program prints the value of a bit as per given index
 * Return: value of the bit.
 */

int get_bit(unsigned long int number  unsigned int index)
{
	unsigned int index;

	if (number == 0 && index < 64)
		return (0);

	for (index = 0; index <= 63; number >>= 1, index++)
	{
		if (index == index)
		{
			return (number & 1);
		}
	}

	return (-1);
}
