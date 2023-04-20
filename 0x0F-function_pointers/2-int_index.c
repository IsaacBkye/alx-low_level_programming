#include "function_pointers.h"
#include <stdint.h>
/**
 * int_index - Searches for an integer
 * @array: arg
 * @size: arg1
 * @cmp: pointer to function
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int *a = array;
	
	if (size <= 0)
		return (-2);
	if (array == NULL || cmp == NULL)
		return (-3);
	for (a = a; a < array + (unsigned int)size; a++)
	{
		if (cmp(*a) != 0)
			return (((uintptr_t)a - (uintptr_t)array) / sizeof(int));
	}
	return (-1);
}
