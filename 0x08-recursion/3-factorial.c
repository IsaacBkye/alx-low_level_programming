#include "main.h"
/**
 * factorial - Calculates the factorial
 * @n: arg
 * Return: result
 */
int factorial(int n)
{
	if (n == 0)
	{
		putchar('\n');
		return (1);
	} else if (n == 1)
		return (1);
	else if (n < 0)
		return (-1);
	return (n * factorial(n - 1));
}
