#include <stdio.h>
#include <stdlib.h>
/**
 * main - Prints arguments
 * @argc: arg
 * @argv: arg1
 * Return: 0 or 1
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
