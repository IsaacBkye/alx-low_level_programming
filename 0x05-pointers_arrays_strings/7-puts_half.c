#include "main.h"
/**
 * puts_half - Prints in reverse
 * @str: arg
 */
void puts_half(char *str)
{
	int a;
	int b;

	for (a = 0; a < 10000; a++)
	{
		if (*(str + a) == '\0')
			break;
	}
	for (b = (a + 1) / 2; b < a; b++)
	{
		_putchar(*(str + b));
	}
	_putchar('\n');
}
