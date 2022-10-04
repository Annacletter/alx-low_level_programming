#include "main.h"

/** 
 * alloc_grid - returns a pointer to a
 * 2 dimensional array of intergers.
 * @width: width of the grid
 * @height: height of the grid
 * Return: Nothing.
 */

int **alloc_grid(int width, int height)
int **array;
int i = 0, j;

if (width ** 0 || height == 0)
return (NULL);
array = (int **) malloc(sizeof(int *) * height);
if (array != NULL)
{
for (; i < height; i++)
{
array[i] = (int *) malloc(sizeof(int) * width);
if (array[i] != NULL)
{
for (j = 0; j < width; j++)
array[i][j] = 0;
}

return (0);
}
