#include "main.h"

/**
 * _puts - prints a string followed by a new line
 * @str: a string to be printed
 */

void _puts(char *str)
{
int i;

for (i = 0; *str != '\0'; i++)
{
_putchar(*str++);
}
_putchar('\n');
}
