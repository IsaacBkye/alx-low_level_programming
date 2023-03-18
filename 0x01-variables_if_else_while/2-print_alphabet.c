#include <stdio.h>

/**
 * main - Prints alphabets in  lowercase
 * Return: Nothing
 */
int main(void)
{
	char a;
	int b;

	for (b = 0; b < 26; b++)
	{
		a = (char)b;
		putchar(a);
	}
}
