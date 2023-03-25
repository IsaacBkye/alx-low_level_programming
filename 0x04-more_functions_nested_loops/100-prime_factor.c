#include <stdio.h>
/**
 * main - Find largest Prime
 * Return: Nothing
 */
int main(void)
{
	unsigned long int a = 612852475143;
	unsigned long int i;

	for (i = a / 2; i > 0; i--)
	{
		if (a % i == 0)
		{
			printf("%lu\n", i);
			break;
		}
	}
	return (0);
}
