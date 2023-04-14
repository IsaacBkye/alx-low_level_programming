#include "main.h"
#include <string.h>
/**
 * type - type
 * @a: pointer arg by malloc
 * @s1: arg
 * @s2: arg0
 * Return: Pointer to char
 */
char *type(char *a, char *s1, char *s2)
{
	int i;
	int k;

	for (i = 0; i <= (int)strlen(s1); i++)
	{
		a[i] = s1[i];
	}
	k = i;
	for (i = k; i < (int)strlen(s2) + k; i++)
	{
		a[i] = s2[i - k];
	}
	a[i] = '\0';
	return (a);
}
/**
 * type1 - type1
 * @a: pointer ag by malloc
 * @s1: arg
 * @s2: arg0
 * @n: arg1
 * Return: Pointer to char
 */
char *type1(char *a, char *s1, char *s2, unsigned int n)
{
	int i;
	int j;

	for (i = 0; i < (int)strlen(s1); i++)
	{
		a[i] = s1[i];
	}
	j = i;
	for (i = j; i < j + (int)n; i++)
	{
		a[i] = s2[i - j];
	}
	a[i] = '\0';
	return (a);
}
/**
 * string_nconcat - Concatenates 2 strings
 * @s1: arg
 * @s2: arg1
 * @n: arg2
 * Return: Pointer to char
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *a;
	int b = strlen(s1);
	int c = strlen(s2);

	if ((int)strlen(s2) <= (int)n)
	{
		a = (char *)malloc(sizeof(char) * a + b * sizeof(char) + 1);
		a = type(a, s1, s2);
	} else
	{
		a = (char *)malloc(sizeof(char) * strlen(s1) + n);
		a = type1(a, s1, s2, n);
	}
	if (a == NULL)
		return (NULL);
	return (a);
}
