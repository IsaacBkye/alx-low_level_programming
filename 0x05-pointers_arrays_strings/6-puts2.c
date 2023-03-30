#include "main.h"
/**
 * puts2 - Prints in reverse
 * @str: arg
 */
void puts2(char *str)
{
	int a;
	int b;

	for (a = 0; a < 10000; a++)
	{
		if (*(str + a) == '\0')
			break;
	}
	for (b = 0; b <= a - 1; b++)
	{
		_putchar(*(str + b));
		b++;
	}
	_putchar('\n');
}
