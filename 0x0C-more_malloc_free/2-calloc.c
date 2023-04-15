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
	char *a = (char *)malloc(nmemb * size);
	int i;

	if (a == NULL)
		return (NULL);
	else if (nmemb != 0 && size != 0)
	{
		for (i = 0; i < (int)size; i++)
			a[i] = 0;
		return (a);
	}
	return (NULL);
}
