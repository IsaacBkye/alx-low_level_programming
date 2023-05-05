#include "main.h"
/**
 * Checker - Check for odd numbers
 * @n: arg
 * Return: 0 or 1
 */
int Checker(unsigned long int n)
{
	unsigned int a = 0;

	while (a < n)
		a += 2;
	return (a - n);
}
/**
 * print_binary - Prints number in binary
 * @n: arg
 */
void print_binary(unsigned long int n)
{
	
	if (n > 1)
		print_binary(n >> 1);
	_putchar('0' + Checker(n));
}
