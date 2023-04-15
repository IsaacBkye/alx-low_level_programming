#include "main.h"
/**
 * _realloc - Reallocates a new block of memory
 * @ptr: arg1
 * @old_size: arg2
 * @new_size: arg3
 * Return: pointer
 */
void *_realloc(char *ptr, unsigned int old_size, unsigned int new_size)
{
	char *a;
	int i;

	if (new_size == old_size)
		return (ptr);
	else if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	else if (ptr == NULL)
	{
		a = malloc(new_size);
		if (a == NULL)
			return (NULL);
		return (a);
	}
	a = malloc(old_size + new_size);
	if (a == NULL)
		return (NULL);
	for (i = 0; ptr[i] != '\0'; i++)
		a[i] = ptr[i];
	a[i] = '\0';
	free(ptr);
	return (a);
}
