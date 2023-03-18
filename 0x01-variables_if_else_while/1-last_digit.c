#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - find last digit
 * Return: return 0
 */
int main(void)
{
	int n;
	int m;
	char p[] = "and is greater than 5";
	char q[] = "and is 0";
	char r[] = "and is less than 6 and not 0";

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	m = n % 10;
	printf("Last digit of %d ", "is ", "%d ", n, m);
	if (m > 5)
	{
		printf("%s\n", p);
	} else if (m == 0)
	{
		printf("%s\n", q);
	} else
	{
		printf("%s\n", r);
	}
	return (0);
}
