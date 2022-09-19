#include "main.h"

/**
 * swap_int - swaps the values of two integers
 * @a: argument one
 * @b: argument two
 */

void swap_int(int *a, int *b)
{
int c = *a;
*a = *b;
*b = c;
}
