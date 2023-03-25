#include "main.h"
/**
 * print_triangle - Print a triangle
 * @size: arg
 */
void print_triangle(int size)
{
	int a;
	int b;

	if (size < 1)
		_putchar('\n');
	else
	{
		for (a = 1; a < size; a++)
		{
			_putchar(' ');
		}
		_putchar('#');
		for (a = 1; a < size; a++)
		{
			_putchar('\n');
			for (b = size - a; b > 1; b--)
			{
				_putchar(' ');
			}
			for (b = 0; b < a + 1; b++)
			{
				_putchar('#');
			}
		}
		_putchar('\n');
	}
}
