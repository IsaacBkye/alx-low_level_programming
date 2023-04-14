#include "main.h"
/**
 * array_range - Creates an array of integers
 * @min: arg
 * @max: arg1
 * Return: Pointer to int
 */
int *array_range(int min, int max)
{
	int *a;
	int i;

	if (min > max)
		return (NULL);
	a = (int *)malloc((max - min + 1) * sizeof(int));
	if (a == NULL)
		return (NULL);
	for (i = min; i <= max; i++)
	{
		a[i - min] = i;
	}
	return (a);
}
