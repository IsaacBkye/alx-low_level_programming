#include <stdio.h>
/**
 * main - print number combinations
 * Return: Nothing
 */
int main(void)
{
	int a = 0;

	while (a < 10)
	{
		putchar('0' + a);
		if (a != 9)
		{
			putchar(',');
			putchar(' ');
		}
		a++;
	}
	putchar('\n');
	return (0);
}
