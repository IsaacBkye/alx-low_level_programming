#include <unistd.h>
/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _pputchar(char c)
{
	return (write(1, &c, 1));
}
void print_alphabet(void)
{
	int _a;

	for (_a = 97; _a < 97 + 26; _a++)
	{
		putchar((char)_a);
	}
	putchar('\n');
	return;
}
void print_alphabet_x10(void)
{
	int _a;
	int _b;

	for (_a = 0; _a < 10; _a++)
	{
		for (_b = 97; _b < 97 + 26; _b++)
		{
			putchar((char)_b);
		}
		putchar('\n');
	}
	return;
}
