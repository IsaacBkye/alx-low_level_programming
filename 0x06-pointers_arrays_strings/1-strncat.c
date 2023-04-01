#include "main.h"
/**
 * _strncat - Concatenates 2 strings
 * @dest: arg
 * @src: arg1
 * @n: arg2
 * Return: potinter to char
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int k;

	for (i = 0; i < 1000000; i++)
	{
		if (*(dest + i) == '\0')
			break;
	}
	for (k = i; k < i + n; k++)
	{
		*(dest + k) = *(src + (k - i));
	}
	return (dest);
}
