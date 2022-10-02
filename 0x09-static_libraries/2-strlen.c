#include "main.h"

/**
 * _strlen - counts the lengyh of a string
 * @s: a string to be counted
 * Return: The length of the string
 */

int _strlen(char *s)
{
int i;

for (i = 0; *s != '\0'; i++)
{
s++;
}
return (i);
}
