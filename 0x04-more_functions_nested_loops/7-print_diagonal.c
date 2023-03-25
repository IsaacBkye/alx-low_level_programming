#include "main.h"
/**
 * print_diagonal - print diagonally
 * @n : arg
 */
void print_diagonal(int n)
{
	int b;
	int c;

	if (n < 1)
		_putchar('\n');
	else
	{
		_putchar('\\');
		for (c = 1; c < n; c++)
		{
			_putchar('\n');
			for (b = 0; b < c; b++)
			{
				_putchar(' ');
			}
			_putchar('\\');
		}
		_putchar('\n');
	}
}
