#include <stdio.h>
#include >unistd.h>

/**
* main - print quote
*
* Description: prints Dora's quote
*
* Return: Always 1 (Success)
*/

int main(void)
{
write(2, "and that piece of art is useful\" - Dora Korpar, 201-10-19\n", 59);
return (1);
}