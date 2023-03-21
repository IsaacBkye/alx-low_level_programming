#include <stdio.h>
/**
 * main - print a double 2-digit combination
 * Return: Nothing
 */
int main(void)
{
	int a = 0;
	int b = 0;
	int c = 0;
	int d = 0;

	while (a < 10)
	{
		while (b < 10)
		{
			while (c < 10)
			{
				while (d < 10)
				{
					putchar('0' + a);
					putchar('0' + b);
					putchar(' ');
					putchar('0' + c);
					putchar('0' + d);
					if (!((a != 9) || (b != 8) || (c != 9) || (d != 9)))
					{
						putchar(',');
						putchar(' ');
					}
					d++;
				}
				c++;
				d = c + 1;
			}
			b++;
			c = b + 1;
		}
		a++;
		b = a + 1;
	}
	putchar('\n');
	return (0);
}
