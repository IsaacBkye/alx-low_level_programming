#include "main.h"
/**
 * length_s - Find string length
 * @str: arg
 * Return: length of string
 */
int length_s(char *str)
{
	if (str[0] != '\0')
		return (1 + length_s(1 + str));
	return (0);
}
/**
 * check_s - Checks for palindrom
 * @str: arg
 * @a: arg1
 * @b: arg2
 * Return: 1 if a palindrome
 */
int check_s(char *str, int a, int b)
{
	if (str[a] == str[b])
	{
		if (a > b / 2)
			return (1);
		else
			return (check_s(str, ++a, --b));
	}
	return (0);
}
/**
 * is_palindrome - Checker for palindrome
 * @str: arg
 * Return: 1 if os
 */
int is_palindrome(char *str)
{
	return (check_s(str, 0, length_s(str) - 1));
}
