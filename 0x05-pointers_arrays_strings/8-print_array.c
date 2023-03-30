#include "main.h"
/**
 * print_array - Prints in reverse
 * @a: arg
 * @n: arg
 */
void print_array(int *a, int n)
{
	int d;

	for (d = 0; d < n; d++)
	{
		if (d == n - 1)
			printf("%d\n", (*(a + d)));
		else
			printf("%d, ", (*(a + d)));
	}
}
