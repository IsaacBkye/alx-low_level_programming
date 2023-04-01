#include "main.h"
/**
 * strcmp - Compares 2 stings
 * @s1: arg
 * @s2: arg1
 * Return: Integer difference
 */
int _strcmp(char *s1, char *s2)
{
	int i;
	int j = 0;
	int k = 0;

	for (i = 0; i < 1000000; i++)
	{
		if (*(s1 + i) == '\0')
			break;
		j = (*(s1 + i));
	}
	for (i = 0; i < 1000000; i++)
	{
		if (*(s2 + i) == '\0')
			break;
		k = (*(s2 + i));
	}
	return (j - k);
}
