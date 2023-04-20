#include "3-calc.h"
/**
 * main - Main
 * @argc: arg
 * @argv: arg1
 * Return: 0
 */
int main(int argc, char *argv[])
{
	char *a = "+-*/%";
	int b;
	int c = 0;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	for (b = 0; b < 5; b++)
		*argv[2] == a[b] ? c = 1 : c;
	if (c != 1)
	{
		printf("Error\n");
		exit(99);
	}
	if ((*argv[2] == '/' || *argv[2] == '%') && atoi(argv[3]) == 0)
	{
		printf("Error\n");
		exit(100);
	}
	printf("%d\n", get_op_func(argv[2])(atoi(argv[1]), atoi(argv[3])));
	return (0);
}
