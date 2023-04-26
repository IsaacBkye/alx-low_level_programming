#include "main.h"
/**
 * _printf - Imitates printf
 * @fmt: arg to be passed
 * Return: Length of that printed out
 */
int _printf(const char *fmt, ...)
{
	va_list lst;
	char a, *b;
	int i;

	va_start(lst, fmt);
	if (!(fmt && *fmt))
		return (-1);
	else
	{
		while (fmt != NULL)
		{
			if (*fmt != '%')
			{
				i++;
				write(1, fmt, 1);
				fmt++;
			} else
			{
				fmt = fmt + 2;
				if (*fmt == 'c')
				{
					a = va_arg(lst, int);
					write(1, &a, 1);
				} else if (*fmt == 's')
				{
					b = va_arg(lst, char *);
					write(1, &b, strlen(b));
				} else if (*fmt == '%')
				{
					a = '%';
					write(1, &a, 1);
				}
				i = i + 2;
			}
		}
	} return i;
}
