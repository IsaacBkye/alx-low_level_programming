#include "variadic_functions.h"
/**
 * print_strings - Prints strings
 * @separator: arg
 * @n: arg1
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ls;

	va_start(ls, n);
	if (n == 0)
		return;
	if (separator == NULL)
	{
		for (i = 0; i < n; i++)
		{
			printf("%s", va_arg(ls, char *));
		}
		printf("\n");
	} else
	{
		for (i = 0; i < n - 1; i++)
		{
			printf("%s", va_arg(ls, char *));
			printf("%s", separator);
		}
		printf("%s", va_arg(ls, char *));
		printf("\n");
	}
	va_end(ls);
}
