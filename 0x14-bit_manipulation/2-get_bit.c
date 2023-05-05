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
 * get_bit - Prints number in binary
 * @n: arg
 * @index: arg1
 * Return: The bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int c = 0, nn;

	nn = n;
	while (nn > 1)
	{
		nn = nn >> 1;
		c++;
	}
	if (index > c)
		return (-1);
	for (nn = 0; nn < index; nn++)
		n = n >> 1;
	return (Checker(n));
}
