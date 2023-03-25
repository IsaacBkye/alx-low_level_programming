#include "main.h"
/**
 * print_diagonal - print diagonally
 * @n : arg
 */
void print_diagonal(int n)
{
	for (n = n; n > 0; n--)
	{
		_putchar(' ');
	}
	_putchar('\\');
	_putchar('\n');
}
