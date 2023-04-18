#include "main.h"
#include <stddef.h>
/**
 * _strpbrk - Searches a string for any of a set of bytes
 * @s: arg
 * @accept: arg
 * Return: A pointer to the byte in s that matches one of the bytes
 */
char *_strpbrk(char *s, char *accept)
{
	int i;
	int j;
	char **a;
	*a = &s;

	for (i = 0; i < 1000000; i++)
	{
		if (*(s + i) == *accept)
		{
			for (j = 0; j < 100; j++)
			{
				if (*(s + (i + j)) != '\0')
					*(a + j) = *(s + (i + j));
			}
			return (a);
		} else if (*(s + i) == '\0')
			break;
	}
	return (NULL);
}
