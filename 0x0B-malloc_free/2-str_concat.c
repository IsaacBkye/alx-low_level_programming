#include "main.h"
/**
 * pCopy - Copy for pointer
 * @p: arg
 * Return: Char to pointer or Null
 */
char *pCopy(char *p)
{
	int i;
	int j = 0;
	char *a;

	for (i = 0; i < 100000; i++)
	{
		j++;
		if (p[i] == '\0')
			break;
	}
	a = (char *)malloc(j * sizeof(*p));
	if (a == NULL)
		return (NULL);
	for (i = 0; i < j; i++)
	{
		a[i] = p[i];
	}
	return (a);
}

/**
 * _pCopy - Copy for 2 pointers as one
 * @p1: arg
 * @p2: arg1
 * Return: Char to pointer or Null
 */
char *_pCopy(char *p1, char *p2)
{
	int j = 0;
	int k = 0;
	int i;
	int l;
	char *a;

	for (i = 0; i < 100000; i++)
	{
		j++;
		if (p1[i] == '\0')
			break;
	}
	for (i = 0; i < 100000; i++)
	{
		k++;
		if (p2[i] == '\0')
			break;
	}
	a = (char *)malloc(k * sizeof(*p2) + j * sizeof(*p1) - 1);
	if (a == NULL)
		return (NULL);
	for (i = 0; i < 100000; i++)
	{
		if (p1[i] == '\0')
			break;
		a[i] = p1[i];
	}
	l = i;
	for (i = l; i < j + k; i++)
	{
		a[i] = *(p2 + i - l);
	}
	return (a);
}

/**
 * str_concat - Concatenate strings by pointers
 * @s1: arg
 * @s2: arg1
 * Return: Pointer to char
 */
char *str_concat(char *s1, char *s2)
{
	char *a;

	if (s1 == NULL && s2 == NULL)
	{
		a = (char *)malloc(sizeof(*s1));
		a[0] = '\0';
		return (a);
	}
	if (s1 == NULL)
	{
		a = pCopy(s2);
		return (a);
	} else if (s2 == NULL)
	{
		a = pCopy(s1);
		return (a);
	}
	a = _pCopy(s1, s2);
	return (a);
}
