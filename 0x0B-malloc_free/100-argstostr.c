#include "main.h"
/**
 * argstostr - concats arguments
 * @ac: arg
 * @av: arg1
 * Return: a string or null
 */
char *argstostr(int ac, char **av)
{
	int a, b, c = 0;
	char *str = NULL;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (a = 0; a < ac; a++)
	{
		for (b = 0; av[a][b] != '\0'; b++)
		{
			c++;
		}
	}
	str = malloc(sizeof(char) * (ac + 1 + c));
	if (str == NULL)
		return (NULL);
	c = 0;
	for (a = 0; a < ac; a++)
	{
		for(b = 0; av[a][b] != '\0'; b++)
		{
			str[c] = av[a][b];
			c++;
			
		}
		str[c++] = '\n';
	}
	str[c] = '\0';
	return (str);
}
