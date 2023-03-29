#include "main.h"
/**
 * rev_string - Prints in reverse
 * @s: arg
 */
void rev_string(char *s)
{
	char c[10];
	int i;
	int a = 0;	
	
	for (i = 0; i < 1000; i++)
	{
		if (*(s + i) == '\0')
			break;
		c[i] = *(s + i);
	}
	for (i = i; i >= 0; i--)
	{
		*(s + a) = c[i];
		putchar(c[i]);
		a++;
	};
}
