#include "main.h"
/**
 * _memset - Function fills the n bytes of the memory area
 * @s: arg
 * @b: arg1
 * @n: arg2
 * Return: a character
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(s + i) = b;
	}
	return (s);
}
