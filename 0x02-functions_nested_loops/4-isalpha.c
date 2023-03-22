#include "main.h"
/**
 * _isalpha - check the code.
 * @c: arg
 *
 * Return: Always 0.
 */
int _isalpha(int c)
{
	if (c > 96 && c < (97 + 26))
	{
		return (1);
	} else if (c > 64 && c < (65 + 26))
	{
		return (1);
	}
	return (0);
}
