#include <stdio.h>
/**
 * main - Prints base 10 digits
 * Return: Nothing
 */
int main(void)
{
	int a = 0;

	while (a < 10)
	{
		printf("%d", a++);
	}
	printf("\n");
	return (0);
}
