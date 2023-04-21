#include "variadic_functions.h"
/**
 * print_numbers - Prints numbers
 * @separator: arg
 * @n: arg1
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ls;

	if (n == 0)
		return;
	va_start(ls, n);
	if (separator == NULL)
	{
		for (i = 0; i < n; i++)
		{
			printf("%d", va_arg(ls, unsigned int));
		}
		printf("\n");
	} else
	{
		for (i = 0; i < n - 1; i++)
		{
			printf("%d", va_arg(ls, unsigned int));
			printf("%s", separator);
		}
		printf("%d\n", va_arg(ls, unsigned int));
	}
	va_end(ls);
}
