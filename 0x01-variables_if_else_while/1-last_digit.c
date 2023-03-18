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

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	m = n % 10;
	char p[] = "and is greater than 5";
	char q[] = "and is 0";
	char r[] = "and is less than 6 and not 0";

	printf("%c ", "%d ", "is ", "%s\n", m, n, m > 5 ? p : m == 0 ? q : r);
	return (0);
}
