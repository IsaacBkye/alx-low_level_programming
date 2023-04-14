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

	if (nmemb == 0 || size == 0 || a == NULL)
		return (NULL);
	for (i = 0; i < (int)nmemb; i++)
	{
		*(a + 1) = '0';
	}
	return (a);
}
