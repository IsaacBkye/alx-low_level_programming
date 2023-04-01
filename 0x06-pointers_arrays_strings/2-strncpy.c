#include "main.h"
/**
 * _strncpy - Copies string
 * @dest: arg
 * @src: arg1
 * @n: arg2
 * Return: pointer to char
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for(i = 0; i < n; i++)
	{
		*(dest + i) = *(src + i);
	}
	return (dest);
}
