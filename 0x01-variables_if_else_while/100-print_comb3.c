#include <stdio.h>
/**
 * main - print a 2-digit combination
 * Return: Nothing
 */
int main(void)
{
	int a = 0;
	int b = a + 1;

	while (a < 9)
	{
		while (b < 10)
		{
			putchar('0' + a);
			putchar('0' + b);
			putchar(',');
			putchar(' ');
			b++;
		}
		a++;
		b = a + 1;
	}
	putchar('\n');
	return (0);
}
