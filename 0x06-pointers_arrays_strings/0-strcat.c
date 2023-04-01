#include "main.h"
/**
 * _strcat - Concatenates strings
 * @dest: arg
 * @src: arg1
 * Return: pointer to char
 */
char *_strcat(char *dest, char *src)
{
	int i;
	int k;
	int j;
	int l;

	for (i = 0; i < 1000000; i++)
	{
		if (*(dest + i) == '\0')
			break;
	}
	j = i;
	for (k = 0; k < 1000000; k++)
	{
		if (*(src + k) == '\0')
			break;
	}
	l = j;
	for (i = i; i < j + k; i++)
	{
		*(dest + i) = *(src + (i - l));
	}
	return (dest);
}
