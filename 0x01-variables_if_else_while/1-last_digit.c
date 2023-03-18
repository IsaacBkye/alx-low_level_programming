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
	char m[];

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	m = (char)n;
	int o = m[sizeof(m) / sizeof(char)];
	char p[] = "and is greater than 5";
	char q[] = "and is 0";
	char r[] = "and is less than 6 and not 0";

	printf("%c ", "%d ", "is ", "%s\n", o, n, o > 5 ? p : o == 0 ? q : r);
	return (0);
}
