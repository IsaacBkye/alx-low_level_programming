#include "main.h"
/**
 * print_square - Prints a square
 * @size: arg
 */
void print_square(int size)
{
	int a;
	int b;
	int c;

	if (size < 1)
	{
		_putchar('\n');
	}
	else
	{
		for(c = 0; c < size; c++)
			_putchar('#');
		for (a = 1; a < size; a++)
		{
			_putchar('\n');
			for (b = 0; b < size; b++)
			{
				_putchar('#');
			}
		}
		_putchar('\n');
	}
}
