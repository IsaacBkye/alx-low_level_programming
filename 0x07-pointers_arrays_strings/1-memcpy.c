#include "main.h"
/**
 * _memcpy - Copies n bytes from memory area
 * @dest: arg
 * @src: arg1
 * @n: arg2
 * Return: a character
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(dest + i) = *(src + i);
	}
	return (dest);
}
