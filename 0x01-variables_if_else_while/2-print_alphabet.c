#include <stdio.h>

/**
 * main - Prints alphabets in  lowercase
 * Return: Nothing
 */
int main(void)
{
	char a;
	int b;

	for (b = 97; b < 97 + 26; b++)
	{
		a = (char)b;
		putchar(a);
	}
	return (0);
}
