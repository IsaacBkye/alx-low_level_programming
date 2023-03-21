#include <stdio.h>
/**
 * main - print a 3-digit combination
 * Return: Nothing
 */
int main(void)
{
	int a;
	int b;
	int c;

	for (a = 0; a < 9; a++)
	{
		for (b = a + 1; b < 10; b++)
		{
			for (c = b + 1; c < 10; c++)
			{
				putchar(a);
				putchar(b);
				putchar(c);
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
