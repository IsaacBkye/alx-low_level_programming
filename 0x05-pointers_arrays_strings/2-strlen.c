#include "main.h"
/**
 * _strlen - Count string length
 *
 * @s: arg
 * Return: The length
 */
int _strlen(char *s)
{
	int i;

	for (i = 0; i < 10000; i++)
	{
		if (*(s + i) == '\0')
			break;
	}
	return (i);
}
