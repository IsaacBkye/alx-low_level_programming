#include <stdio.h>
/**
 * main - prints alphabets except e and q
 * Return: Nothing
 */
int main(void)
{
	int a = 'a';
	int b;
	char c;

	for (b = a; b < b + 26; b++)
	{
		if ((char)b != ('q' || 'e'))
		{
			c = (char)b;
			putchar(c);
		}
	}
	c = '\n';
	putchar(c);
	return (0);
}
