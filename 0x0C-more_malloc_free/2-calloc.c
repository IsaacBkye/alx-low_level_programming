#include "main.h"
#include <string.h>
/**
 * _calloc - Allocates memory for array
 * @nmemb: arg
 * @size: arg1
 * Return: Void pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *a = (void *)malloc(nmemb * size);

	if (nmemb == 0 || size == 0 || a == NULL)
		return (NULL);
	memset(a, 0, nmemb);
	return (a);
}
