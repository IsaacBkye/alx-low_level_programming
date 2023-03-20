#include <stdio.h>
/**
 * main - Prints numbers in new line
 * Return : Nothing 
 */
int main(void)
{
	int a = 0;
	
	while (a < 10)
	{
		putchar('0' + a);
		a++;
	}
	putchar('\n');
	return (0);
}
