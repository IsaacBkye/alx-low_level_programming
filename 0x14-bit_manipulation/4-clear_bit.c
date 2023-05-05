#include "main.h"
/**
 * clear_bit - Set value of bit to 0
 * @n: arg
 * @index: arg1
 * Return: 1 if a success or 0 otherwise
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int a;

	a = 1 << index;
	if (index <= sizeof(n) * 8 - 1)
	{
		*n &= ~a;
		return (1);
	}
	return (-1);
}
