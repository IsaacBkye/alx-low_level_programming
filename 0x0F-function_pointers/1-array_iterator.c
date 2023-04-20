#include "function_pointers.h"
/**
 * array_iterator - Executes
 * @array: arg
 * @size: arg1
 * @action: arg2
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int *a = array;

	if (array == NULL || action == NULL)
		return;
	for (a = a; a < array + size; a++)
		action(*a);
}
