#include "main.h"

/**
 * print_rev - prints a string in the reverse followed by a new line
 * @s: a string to be printed
 */

void print_rev(char *s)
{
int length, i;

for (length = 0; *s != '\0'; length++)
++s;
s--;
for (i = length; i > 0; i--)
{
_putchar(*s);
s--;
}
_putchar('\n');
}
