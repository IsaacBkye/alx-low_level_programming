#include <stdio.h>
#include "main.h"
/**
 * main - Prints _putchar
 * Return: Nothing
 */
int main(void)
{
	char a[] = "_putchar";
	unsigned long b;

	for (b = 0; b < (sizeof(a) / sizeof(char)); b++)
	{
		putchar(a[b]);
	}
	return (0);
}
