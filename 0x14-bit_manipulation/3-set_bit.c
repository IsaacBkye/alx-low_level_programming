#include "main.h"
/**
 * expo - Calculate exponent
 * @a: arg
 * @b: arg1
 * Return: Result
 */
unsigned long int expo(unsigned int a, unsigned int b)
{
	unsigned long int i, res = 1;

	for (i = 0; i < b; i++)
		res = res * a;
	if (b == 0)
		return (1);
	return (res);
}
/**
 * set_bit - Set bit at given index
 * @n: arg
 * @index: arg1
 * Return: 1 if successful 0 otherwise
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (n == NULL)
		return (-1);
	*n = *n | expo(2, index);
	return (1);
}
