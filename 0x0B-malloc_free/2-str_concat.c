#include "main.h"
/**
 * str_concat - Concatenate strings by pointers
 * @s1: arg
 * @s2: arg1
 * Return: Pointer to char
 */
char *str_concat(char *s1, char *s2)
{
	int i;
	int j = 0;
	int k = 0;
	int l;
	char *a;

	if (s1 == NULL && s2 == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < 100000; i++)
	{
		j++;
		if (s1[i] == '\0')
		{
			break;
		}
	}
	for (i = 0; i < 100000; i++)
	{
		k++;
		if (s2[k] == '\0')
			break;
	}
	a = (char *)malloc(k * sizeof(*s2) + j * sizeof(s1));
	if (a == NULL)
		return (NULL);
	for (i = 0; i < j; i++)
	{
		if (s1[i] == '\0')
			a[i] = ' ';
		else
			a[i] = s1[i];
	}
	l = i;
	for (i = l; i < j + k; i++)
	{
		a[i] = *(s2 + i - l);
	}
	return (a);
}
