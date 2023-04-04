#include "main.h"
#include <stddef.h>
/**
 * _strchr - Finds the first occurence of a character in a string
 * @s: arg
 * @c: arg1
 * Return: a charater or null if none
 */
char *_strchr(char *s, char c)
{
	unsigned int i;

	for (i = 0; i < 1000000; i++)
	{
		if (*(s + i) == c)
		{
			return ((s + i));
		} else if (*(s + i) == '\0')
		{
			return (NULL);
		}
	}
	return (NULL);
}
