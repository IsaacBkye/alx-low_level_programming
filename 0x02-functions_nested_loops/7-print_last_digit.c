#include "main.h"

/**
 * print_last_digit - check the code
 * @c:
 *
 * Return: Always 0.
 */
int print_last_digit(int c)
{
	if (c % 10 < 0)
	{
		return ((c % 10) * -1);
	}
	return (c % 10);

}
