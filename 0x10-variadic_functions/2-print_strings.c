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
	char *s;

	va_start(ls, n);
	if (n == 0)
		return;
	if (separator == NULL)
	{
		for (i = 0; i < n; i++)
		{
			s = va_arg(ls, char *);
			s == NULL ? printf("(nil)") : printf("%s", s);
		}
		printf("\n");
	} else
	{
		for (i = 0; i < n - 1; i++)
		{
			s = va_arg(ls, char *);
			s == NULL ? printf("(nil)") : printf("%s", s);
			printf("%s", separator);
		}
		s = va_arg(ls, char *);
		s == NULL ? printf("(nil)") : printf("%s", s);
		printf("\n");
	}
	va_end(ls);
}
