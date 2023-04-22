#include "variadic_functions.h"
/**
 * print_i - Prints integers
 * @ls: arg
 */
void print_i(va_list ls)
{
	printf("%d", va_arg(ls, int));
}
/**
 * print_c - Prints characters
 * @ls: arg
 */
void print_c(va_list ls)
{
	printf("%c", va_arg(ls, int));
}
/**
 * print_f - Prints floats
 * @ls: arg
 */
void print_f(va_list ls)
{
	printf("%f", va_arg(ls, double));
}
/**
 * print_cc - Prints strings
 * @ls: ag
 */
void print_cc(va_list ls)
{
	char *u = va_arg(ls, char *);
	if (u == NULL)
		printf("(nil)");
	else
		printf("%s", u);
}
/**
 * print_all - Prints all
 * @format: arg
 */
void print_all(const char * const format, ...)
{
	int i;
	int j;
	va_list ls;
	char *sep;	
	aa bbb[] = {
		{"c", print_c},
		{"i", print_i},
		{"f", print_f},
		{"s", print_cc},
		{NULL, NULL}
	};

	i = 0;
	va_start(ls, format);
	sep = "";
	while (format && format[i])
	{
		j = 0;
		while (bbb[j].x != NULL)
		{
			if (format[i] == bbb[j].x[0])
			{
				printf("%s", sep);
				bbb[j].y(ls);
				sep = ", ";
			}
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(ls);
}
