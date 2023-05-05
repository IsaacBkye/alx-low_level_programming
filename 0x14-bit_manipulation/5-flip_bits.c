#include "main.h"
/**
 * flip_bits - Flips bits
 * @n: arg
 * @m: arg1
 * Return: count of flips
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int a;
	unsigned int b;

	a = n ^ m;
	b = 0;
	while (a)
	{
		b += a & 1;
		a >>= 1;
	}
	return (b);
}
