#include "main.h"
/**
 * print_line - Print a line
 * @n: arg
 */
void print_line(int n)
{
	for (n = n; n > 0; n--)
	{
		_putchar('_');
	}
	_putchar('\n');
}
