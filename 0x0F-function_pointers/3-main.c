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

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (get_op_func(argv[2]) == NULL)
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
