#include "main.h"
/**
 * alloc_grid -  returns a pointer to a 2 dimensional array of integers.
 * @width: arg
 * @height: arg1
 * Return: Pointer or NULL
 */
int **alloc_grid(int width, int height)
{
	int **a = (int **)malloc(height * sizeof(int **));
	int i;
	int j;

	if (width < 1 || height < 1)
		return (NULL);
	for (i = 0; i < width; i++)
	{
		a[i] = (int *)malloc(width * sizeof(int *));
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			a[i][j] = 0;
		}
	}
	return (a);
}
