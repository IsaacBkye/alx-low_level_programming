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

	for (a = 0; a < 9; a++)
	{
		for (b = a + 1; b < 10; b++)
		{
			for (c = b + 1; c < 10; c++)
			{
				for (d = c + 1; d < 10; d++)
				{
					putchar(a);
					putchar(b);
					putchar(' ');
					putchar(c);
					putchar(d);
					putchar(',');
					putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
