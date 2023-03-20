#include <stdio.h>
/**
 * main - prints alphabets except e and q
 * Return: Nothing
 */
int main(void)
{
	int b = 97;
	char c;

	while (b < 97 + 26)
	{
		if ((char)b != 'q' && (char)b != 'e')
		{
			c = (char)b;
			putchar(c);
		}
		b++;
	}
	c = '\n';
	putchar(c);
	return (0);
}
