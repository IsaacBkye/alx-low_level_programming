#include <stdio.h>
#include "main.h"
/**
 * main - Prints _putchar
 * Return: Nothing
 */
int main(void)
{
	char a[] = "_putchar";
	int b;

	for (b = 0; b < sizeof(a) / sizeof(char); b++)
	{
		_putchar(a[b]);
	}
	_putchar('\n');
	return (0);
}
