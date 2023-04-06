#include "main.h"
/**
 * _print_rev_recursion - Prints string in reverse followed by new line
 * @s: arg
 */
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		s++;
		_print_rev_recursion(s);
	} else
	{
		while (*s != '\n')
		{
			_putchar(*s);
			s--;
		}
		_putchar('\n');
	}
}
