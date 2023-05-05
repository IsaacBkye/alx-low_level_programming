#include "main.h"
/**
 * binary_to_uint - Converts to uint
 * @b: arg
 * Return: unit result
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int a = 0;

	if (*b < '0' || *b > '1' || b == NULL)
		return (0);
	while (*b != '\0')
	{
		if (*b == '1')
		{
			a = 1;
			b++;
			while (*b != '\0')
			{
				if (*b < '0' || *b > '1')
					return (0);
				a = a << 1;
				if (*b == '1')
					a += 1;
				b++;
			}
			break;
		}
		b++;
	}
	return (a);
}
