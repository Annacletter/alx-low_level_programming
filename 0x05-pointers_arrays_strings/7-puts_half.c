#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * puts_half - prints half of a string followed by a new line
 * @str: the argument
 */

void puts_half(char *str)
{
int x;
x = 0;

while (str[x])
x++;
if (x % 2 != 0)
x = (x + 1) / 2; /*Add 1: decrease length of odd string half*/
else
x = x / 2;
while (str[x])
{
putchar(str[x]);
x++;
}
putchar('\n');
}
