#include "main.h"
/**
 * _islower -  lower
 * @c: arg
 *
 * Return: nothing
 */
int _islower(int c)
{
	if (c > 96 && c < 97 + 26)
	{
		return (1);
	}
	return (0);
}
