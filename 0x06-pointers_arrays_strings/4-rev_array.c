#include "main.h"
/**
 * reverse_array - Prints in reverse
 * @a: arg
 * @n: arg1
 */
void reverse_array(int *a, int n)
{
	int i;
	int l[20];
	int *j = l;
	int k = 0;

	for (i = n - 1; i >= 0; i--)
	{
		*(j + k) = *(a + i);
		k++;
	}
	for (i = 0; i < n; i++)
	{
		*(a + i) = *(j + i);
	}
}
