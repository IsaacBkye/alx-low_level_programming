#include "main.h"
/**
 * create_array - Creates an array of chars
 * @size: arg
 * @c: arg1
 * Return: Pointer to char or Null if size is
 */
char *create_array(unsigned int size, char c)
{
	char *a;
	unsigned int i;

	if (size != 0)
	{
		a = (char *)malloc(size);
		if (a == NULL)
			return (NULL);
		for (i = 0; i < size; i++)
		{
			*(a + i) = c;
		}
		return (a);
	}
	return (NULL);
}
