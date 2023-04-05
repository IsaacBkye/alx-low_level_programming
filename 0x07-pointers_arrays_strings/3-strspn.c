#include "main.h"
/**
 * _strspn - Gets the length of the prefix string
 * @s: arg
 * @accept: arg1
 * Return: an integer
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0;

	for (i = 0; i < 1000000; i++)
	{
		if (*accept == *(s + i))
		{
			return (i + 1);
			break;
		}
	}
	return (-1);
}
