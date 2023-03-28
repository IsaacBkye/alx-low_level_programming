#include "main.h"
/**
 * print_rev - Prints in reverse
 * @s: arg
 */
void print_rev(char *s)
{
	int a;
	int b;

	for (a = 0; a < 10000; a++)
	{
		if (*(s + a) == '\0')
			break;
	}
	for (b = a; b > 0; b--)
	{
		_putchar(*(s + b));
	}
	_putchar('\n');
}
