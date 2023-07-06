#include "main.h"

/**
 * set_bit - gives the value of a bit to 1 at a given index.
 * @number: pointer of an unsigned long int.
 * @index: index of the bit.
 * Return: 1.
 */
 
int set_bit(unsigned long int *number, unsigned int index)
{
	unsigned int m;
	if (index > 63)
		return (-1);
	m = 1 << index;
	*number = (*number | m);
	return (1);
}

