#include "main.h"
#include <string.h>
#include <stddef.h>
/**
 * _print_rev_recursion - Prints string in reverse followed by new line
 * @s: arg
 */
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(++s);
		_putchar(*s);
	}
}
