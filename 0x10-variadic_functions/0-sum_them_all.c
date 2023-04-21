#include "variadic_functions.h"
/**
 * sum_them_all - Sums all args
 * @n: arg
 * Return: result
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	unsigned int summed = 0;
	va_list ls;

	if (n == 0)
		return (0);
	va_start(ls, n);
	for (i = 0; i < n; i++)
		summed += va_arg(ls, unsigned int);
	va_end(ls);
	return (summed);
}
