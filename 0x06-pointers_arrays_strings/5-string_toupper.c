#include "main.h"
/**
 * string_toupper - Cahnge to upper case
 * @a: arg
 * Return: pointer to char
 */
char *string_toupper(char *a)
{
	int i;

	for (i = 0; i < 1000000; i++)
	{
		if (*(a + i) == '\0')
			break;
		if (*(a + i) >= 'A' && *(a + i) < 'Z')
			continue;
		else if (*(a + i) >= 'a' && *(a + i) <= 'z')
			*(a + i) = (char)(*(a + i)) + 32;
	}
	return (a);
}
