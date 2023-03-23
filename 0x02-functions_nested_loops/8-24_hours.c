#include "main.h"

/**
 * jack_bauer - check the code
 *
 * Return: Always 0.
 */
void jack_bauer(void)
{
	int a;
	int b;
	int c;
	int d;
	int e;

	for (a = 0; a < 3; a++)
	{
		if (a != 2)
			e = 10;
		else
			e = 4;
		for (b = 0; b < e; b++)
		{
			for (c = 0; c < 6; c++)
			{
				for (d = 0; d < 10; d++)
				{
					_putchar('0' + a);
					_putchar('0' + b);
					_putchar(':');
					_putchar('0' + c);
					_putchar('0' + d);
					_putchar('\n');
				}
			}
		}
	}
}
