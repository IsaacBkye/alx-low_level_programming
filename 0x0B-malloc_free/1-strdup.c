#include "main.h"
/**
 * _strdup - returns a pointer to a new string which is a duplicate of the string
 * @str: arg
 * Return: Pointer to char or NULL
 */
char *_strdup(char *str)
{
	char *a;
	int i;
	int j = 0;

	for (i = 0; i < 100000; i++)
	{
		j++;
		if (str[i] == '\0')
			break;
	}
	a = (char *)malloc(sizeof(char) * j);
	if (a != NULL)
	{
		for (i = 0; i <= j; i++)
		{
			a[i] = str[i];
		}
		return (a);
	}
	return (NULL);
}
