#include <stdio.h>
/**
 * print_number - Print
 * @n: arg
 */
void print_number(int n)
{
	int a = sizeof(n) / sizeof(int);
	int b;

	for (a = a; a > 0; a--)
	{
		b = n / 10 * a;
		_putchar('0' + b);
	}
}
