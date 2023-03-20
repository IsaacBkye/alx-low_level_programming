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
		if (a != 9)
		{
			putchar('0' + a);
			putchar(',');
			putchar(' ');
		} else
		{
			putchar('0' + a);
		}
		a++;
	}
	return (0);
}
