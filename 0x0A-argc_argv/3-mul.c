#include <stdio.h>
#include <stdlib.h>
/**
 * main - Multiply 2 numbers
 * @argc: arg
 * @argv: arg1
 * Return: 0 or 1
 */
int main(int argc, char **argv)
{
	int multi = 1;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	for (argc = argc; argc > 1; argc--)
		multi *= atoi(argv[argc - 1]);
	printf("%d\n", multi);
	return (0);
}
