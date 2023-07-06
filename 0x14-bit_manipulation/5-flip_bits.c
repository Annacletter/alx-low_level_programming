#include "main.h"

/**
 * flip_bits - This program prints number of bits when flipped from one nuber to another.
 * @number: number one.
 * @m: number two.
 *
 * Return: number of bits.
 */
unsigned int flip_bits(unsigned long int number, unsigned long int m)
{
	unsigned int numberbits;
	for (numberbits = 0; number || m; number >>= 1, m >>= 1)
	{
		if ((number & 1) != (m & 1))
		numberbits++;
	}
	return (numberbits);
}
