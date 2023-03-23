#include "main.h"
/**
 * print_to_98 - print to 98
 *
 * @n: arg
 * Return: void
 */
void print_to_98(int n)
{
	int a;

	if (n > 98)
	{
		for (a = n; a >= 98; a--)
		{
			if (a / 100 >= 1)
			{
				_putchar('0' + (a / 100));
				_putchar('0' + (a / 10) % 10);
				_putchar('0' + (a % 10));
			} else
			{
				_putchar('0' + (a / 10));
				_putchar('0' + (a % 10));
			}
			if (a == 98)
				_putchar('\n');
			else
			{
				_putchar(',');
				_putchar(' ');
			}
		}
	} else
	{
		for (a = n; a <= 98; a++)
		{
			if (a / 100 < 0)
			{
				_putchar('-');
				_putchar('0' + (a / 100));
				_putchar('0' + (a / 10) % 10);
				_putchar('0' + (a % 10));
			} else if (a / 10 < 0)
			{
				_putchar('-');
				_putchar('0' + (a / 10));
				_putchar('0' + (a % 10));
			} else if (a / 10 >= 1)
			{
				_putchar('0' + (a / 10));
				_putchar('0' + (a % 10));
			} else if (a / 10 == 0)
			{
				_putchar('0' + (a % 10));
			}
			if (a == 98)
				_putchar('\n');
			else
			{
				_putchar(',');
				_putchar(' ');
			}
		}
	}
}
