#include <stdio.h>
/**
 * main - print a 3-digit combination
 * Return: Nothing
 */
int main(void)
{
	int a = 0;
	int b = a + 1;
	int c = b + 1;

	while (a < 9)
	{
		while (b < 10)
		{
			while (c < 10)
			{
				putchar('0' + a);
				putchar('0' + b);
				putchar('0' + c);
				if ((a != 7) || (b != 8) || (c != 9))
				{
					putchar(',');
					putchar(' ');
				}
				c++;
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
