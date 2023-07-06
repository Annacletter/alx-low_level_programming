#include "main.h"

/**
 * get_endianness - This program checks the endianness
 * Return: 0
 */

int get_endianness(void)
{
	unsigned int x;
	char *c;
	x = 1;
	c = (char *) &x;
	return ((int)*c);
}
