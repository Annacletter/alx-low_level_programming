#include "main.h"

/**
 * print_rev - prints a string in the reverse followed by a new line
 * @s: a string to be printed
 * Return: Always 0 (Success)
 */

void print_rev(char *s)
{
int len = strlen(s);

while (len--)
putchar(*(s + len));
putchar(10);
}
