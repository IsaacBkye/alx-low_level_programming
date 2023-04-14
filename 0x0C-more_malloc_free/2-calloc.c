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

	if (a == NULL)
		return (NULL);
	else if (nmemb != 0 && size != 0)
	{
		memset(a, 0, nmemb);
		return (a);
	}
	return (a);
}
