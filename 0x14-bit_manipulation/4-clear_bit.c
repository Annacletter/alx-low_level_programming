#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index.
 * @n: pointer of an unsigned long int.
 * @index: index of the bit.
 * Return: 0
 */

int clear_bit(unsigned long int *number, unsigned int index)
{
	unsigned int m;
	if (index > 63)
		return (-1);
	m = 1 << index;
	if (*number & m)
		*number ^= m;
	return (1);
}
