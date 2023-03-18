#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/**
 * main - find polarity
 * Return: polarity
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* Conditions */
	if (n < 0)
	{
		printf("%d is negative\n", n);
	} else if (n == 0)
	{
		printf("%d is zero\n", n);
	} else
	{
		printf("%d is positive\n", n);
	}
	return (0);
}
