#include "main.h"

/**
 * get_bit -This program prints the value of a bit as per given index
 * @number: unsigned long int input.
 * @index: index of the bit.
 *
 * Return: value of the bit.
 */
int get_bit(unsigned long int x, unsigned int index)
{
	unsigned int i;

	if (number == 0 && index < 64)
		return (0);

	for (i = 0; i <= 63; number >>= 1, i++)
	{
		if (index == i)
		{
			return (number & 1);
		}
	}

	return (-1);
}
