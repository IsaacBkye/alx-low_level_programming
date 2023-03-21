#include <stdio.h>
/**
 * main - print a double 2-digit combination
 * Return: Nothing
 */
int main(void)
{
	int a;
	int b;
	int c;
	int d;

	while (a < 9)
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
					putchar(',');
					putchar(' ');
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
