#include <stdio.h>
#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: string
 * Return: Always 0 (Success)
 */

void puts2(char *str)
{
int i = 0;

while (*(str + i) != '\0')
{
if (i % 2 == 0)
putchar(*(str + i));
i++;
}
putchar(10);
}
