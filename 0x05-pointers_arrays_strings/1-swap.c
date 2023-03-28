#include "main.h"
/**
 * swap_int - Swaps integers
 *
 * @a: arg
 * @b: arg1
 */
void swap_int(int *a, int *b)
{
	int c;
	
	c = *a;
	*a = *b;
	*b = c;
}
