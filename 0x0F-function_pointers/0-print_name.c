#include "function_pointers.h"
/**
 * print_name - Prints a name
 * @name: arg
 * @f: pointer to function arg
 */
void print_name(char *name, void (*f)(char *))
{
	if (f == NULL || name == NULL)
		return;
	f(name);
}
