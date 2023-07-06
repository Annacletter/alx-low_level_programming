#include <string.h>
#include "math.h"

/**
 * Implementation of the binary_to_uint function that converts a binary to an unsigned int
 * @b: binary
 * Return: unsigned int
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int number = 0, multiple = 1;
	int length;

	if (b == NULL)
		return (0);

	for (length = 0; b[length];)
		length++;

	for (length -= 1; length >= 0; length--)
	{
		if (b[length] != '0' && b[length] != '1')
			return (0);

		number += (b[length] - '0') * multiple;
		multiple *= 2;
	}

	return (number);
}
