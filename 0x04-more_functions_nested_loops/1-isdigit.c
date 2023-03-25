#include "main.h"
/**
 * _isdigit - Check for digits
 *
 * @c: arg
 * Return: 0 or 1
 */
int _isdigit(int c)
{
	char a;

	for (a = '0'; a <= '9'; a++)
	{
		if ((int)c == (int)a)
			return (1);
	}
	return (0);
}
