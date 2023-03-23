#include "main.h"
/**
 * times_table - print 9 xtable
 *
 * Return: void
 */
void times_table(void)
{
	int a;
	int b;
	int c;

	for (a = 0; a < 10; a++)
	{
		for (b = 0; b < 10; b++)
		{
			c = a * b;
			if (c >= 10)
			{
				_putchar('0' + (c / 10));
			}
			_putchar('0' + (c % 10));
			if (b != 9)
			{
				_putchar(',');
				_putchar(' ');;
			}
			if (c < 10)
			{
				if (b > 2)
					_putchar(' ');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
