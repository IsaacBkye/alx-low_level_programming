#include <stdio.h>
/**
 * main - print a 2-digit combination
 * Return: Nothing
 */
int main(void)
{
	int a;
	int b;

	for (a = 0; a < 9; a++)
	{
		for (b = a + 1; b < 10; b++)
		{
			putchar(a);
			putchar(b);
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
