#include <stdio.h>
/**
 * main - prints hexadecimals
 * Return: Nothing
 */
int main(void)
{
	int a = 0;
	char b;

	while (a < 10)
	{
		putchar('0' + a);
		a++;
	}
	a = 97;
	while (a < 97 + 6)
	{
		b = (char)a;
		putchar(b);
		a++;
	}
	b = '\n';
	putchar(b);
	return (0);
}
