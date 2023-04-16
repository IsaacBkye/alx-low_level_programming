#include <stdio.h>
#include <stdlib.h>
/**
 * main - main function
 * @argc: arg
 * @argv: arg1
 * Return: o
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
