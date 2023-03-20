#include <stdio.h>
/**
 * main - Prints alphabets in reverse
 * Return: Nothing
 */
int main(void)
{
	int a = 96 + 26;
	char b;

	while (a > 96)
	{
		b = (char)a;
		putchar(a);
		a--;
	}
	b = '\n';
	putchar(b);
	return (0);
}
