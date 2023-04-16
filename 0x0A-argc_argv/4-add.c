#include <stdio.h>
#include <stdlib.h>
/**
 * main - Add positive numbers
 * @argc: arg
 * @argv: arg1
 * Return: 0 or 1
 */
int main(int argc, char **argv)
{
	int sum = 0;
	int  i;
	char *k = "0123456789";
	int c = 0;
	int j;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	for (i = 0; i <= 9; i++)
	{
		for (j = 1; j < argc; j++)
		{
			if (*argv[j] == k[i])
				c++;
		}
	}
	if (c != argc - 1)
	{
		printf("Error\n");
		return (1);
	}
	for (argc = argc; argc > 1; argc--)
		sum += atoi(argv[argc - 1]);
	printf("%d\n", sum);
	return (0);
}
