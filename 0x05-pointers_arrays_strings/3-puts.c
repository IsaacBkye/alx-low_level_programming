#include "main.h"
/**
 * _puts - Prints
 * @str: arg
 */
void _puts(char *str)
{
	int i;

	for (i = 0; i < 10000; i++)
	{
		if (*(str + i) == '\0')
		{
			_putchar('\n');
			break;
		}
		_putchar(*(str + i));
	}
}
