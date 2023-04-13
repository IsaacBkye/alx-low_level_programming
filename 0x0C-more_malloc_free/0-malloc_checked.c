#include "main.h"
/**
 * malloc_checked - Allocates memory using malloc
 * @b: arg
 * Return: Returns pointer to allocated mem
 */
void *malloc_checked(unsigned int b)
{
	void *a = (void *)malloc(b);

	if (a == NULL)
		exit (98);
	return (a);
}
